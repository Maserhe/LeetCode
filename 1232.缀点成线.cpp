/*
 * @lc app=leetcode.cn id=1232 lang=cpp
 *
 * [1232] 缀点成线
 */

// @lc code=start
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {

         // 只要 斜率 相同就行了
        int n = coordinates.size();
        // 比较和第一个点之间的斜率即可
        int dy = coordinates[1][1] - coordinates[0][1];
        int dx = coordinates[1][0] - coordinates[0][0];
        for(int i=1; i<n; i++){
            int dyi = coordinates[i][1] - coordinates[0][1];
            int dxi = coordinates[i][0] - coordinates[0][0];
            // dy/dx = dyi/dxi
            if(dy * dxi != dyi * dx) return false;
        }
        return true;
    }
};
// @lc code=end

