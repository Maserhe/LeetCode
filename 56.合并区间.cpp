/*
 * @lc app=leetcode.cn id=56 lang=cpp
 *
 * [56] 合并区间
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        // 自定义排序规则
        sort(intervals.begin(), intervals.end(), [](vector<int> & a, vector<int>& b){
            return a[0] < b[0];
        });

        int start = intervals[0][0];
        int end = intervals[0][1];
        vector<vector<int> > ans;
        for (int i = 1; i < intervals.size(); i ++ ) {
            
            if (intervals[i][0] <= end) end = max(end, intervals[i][1]);
            else {
                ans.push_back({start, end});
                start = intervals[i][0];
                end = intervals[i][1];
            }
        }

        ans.push_back({start, end});
        return ans;
    }
};
// @lc code=end

