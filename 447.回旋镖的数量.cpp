/*
 * @lc app=leetcode.cn id=447 lang=cpp
 *
 * [447] 回旋镖的数量
 */

// @lc code=start
class Solution {
public:
    
    int numberOfBoomerangs(vector<vector<int>>& points) {
        
        // 方法一，我用的朴素算法，O(n) 超时了
        // 方法二 ， 哈希。加列组合计数。

        int sum = 0;
        int n = points.size();
        for (int i = 0; i < n; i ++ ){
            unordered_map<int,int> mp;
            for (int j = 0; j < n; j ++ ){
                int x = points[i][0] - points[j][0];
                int y = points[i][1] - points[j][1];
                mp[x * x + y * y] ++ ;
            }

            for (auto i:mp) sum += i.second * (i.second - 1);
        }
        return sum;    
    }
};
// @lc code=end

