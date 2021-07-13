/*
 * @lc app=leetcode.cn id=240 lang=java
 *
 * [240] 搜索二维矩阵 II
 */

// @lc code=start
class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        if (matrix.length == 0) return false;
        if (matrix[0].length == 0) return false;

        for (int i = 0; i < matrix.length; i ++ ) {
            int l = 0, r = matrix[i].length - 1;

            if (target < matrix[i][0] || matrix[i][r] < target) continue;
            while (l < r) {
                int mid = l + r >> 1;
                if (matrix[i][mid] < target) l = mid + 1;
                else r = mid;
            }
            if (target == matrix[i][l]) return true;
        }
        return false;
    }
}
// @lc code=end

