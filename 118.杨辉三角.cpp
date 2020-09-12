/*
 * @lc app=leetcode.cn id=118 lang=cpp
 *
 * [118] 杨辉三角
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> ans(numRows, vector<int>()); // 定义相同 行 的 vector
        // 设置 每行 的 固定 的大小， 以及边界 的 1

        for (int i = 0; i < numRows; i ++ ) {
            ans[i].resize(i + 1);
            ans[i][0] = 1;
            ans[i][i] = 1;
        }
        for (int i = 2; i < numRows; i ++ ) 
            for (int j = 1; j < ans[i].size() - 1; j ++ )
                ans[i][j] = ans[i-1][j-1] + ans[i-1][j];

        return ans;
    }
};
// @lc code=end

