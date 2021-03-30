/*
 * @lc app=leetcode.cn id=74 lang=java
 *
 * [74] 搜索二维矩阵
 */

// @lc code=start
class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {

        // 二分
        int l = 0, r = matrix.length - 1;
        while (l < r) {
            int mid = l + r + 1 >> 1;
            if (matrix[mid][0] <= target) l = mid;
            else r = mid - 1;
        }
        int line = l;

        l =0;
        r = matrix[0].length - 1;
        while (l < r) {
            int mid = l + r >> 1;
            if (matrix[line][mid] < target) l = mid + 1;
            else r = mid;
        }

        if (matrix[line][l] == target) return true;
        return false;
    }
}
// @lc code=end

