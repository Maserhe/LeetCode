/*
 * @lc app=leetcode.cn id=973 lang=cpp
 *
 * [973] 最接近原点的 K 个点
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        
        // 距离直接求平和和就行了。
        int n = points.size();
        if (!n) return {};
        vector<pair<int, int>> arr;        
        for (int i =0; i < n; i ++ ) {
            int t = points[i][0]*points[i][0] + points[i][1]*points[i][1];
            arr.push_back({t, i});
        }
        // 从小到大排序。
        sort(arr.begin(), arr.end());
        vector<vector<int>> ans;
        // 取出前K个
        for (int i = 0; i < K; i ++ ){
            ans.push_back(points[arr[i].second]);
        }
        return ans;
    }
};
// @lc code=end

