/*
 * @lc app=leetcode.cn id=48 lang=cpp
 *
 * [48] 旋转图像
 */

// @lc code=start
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int x = matrix.size();
        if (!x) return;
        int y = matrix[0].size();

        for (int i = 0; i < x; i ++ )
            for (int j = 0; j < i; j ++ )
                swap(matrix[i][j], matrix[j][i]);
        
        for (int i = 0; i < x; i ++ ){
            for (int j = 0; j < y / 2; j ++ ){
                swap(matrix[i][j], matrix[i][y - j - 1]);
            }
        }
    }
};
// @lc code=end

