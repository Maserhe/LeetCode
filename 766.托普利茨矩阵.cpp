/*
 * @lc app=leetcode.cn id=766 lang=cpp
 *
 * [766] 托普利茨矩阵
 */

// @lc code=start
class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
       
       int n1 = matrix.size();
       int n2 = matrix[0].size();

       for (int i = 1; i < n1; i ++ ){
           for (int j = 1; j < n2; j ++ ){
               if (matrix[i][j] != matrix[i - 1][j - 1]) return false;
           }
       }
       return true;

    }
};
// @lc code=end

