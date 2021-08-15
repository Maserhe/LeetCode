/*
 * @lc app=leetcode.cn id=54 lang=java
 *
 * [54] 螺旋矩阵
 */

// @lc code=start
class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        
        int n = matrix.length;
        if (n == 0) return null;
        int m = matrix[0].length;
        List<Integer> ans = new ArrayList<>();
        int up = 0, down = n - 1, left = 0, right = m - 1;

        while (true) {
            
            for (int i = left; i <= right; i ++ ) ans.add(matrix[up][i]);
            up ++ ;
            if (up > down) break;

            for (int i = up; i <= down; i ++ ) ans.add(matrix[i][right]);
            right -- ;
            if (left > right) break;

            for (int i = right; i >= left; i -- ) ans.add(matrix[down][i]);
            down -- ;
            if (up > down) break;

            for (int i = down; i >= up; i -- ) ans.add(matrix[i][left]);
            left ++ ;
            if (left > right) break;
        }
        return ans;
    }
}
// @lc code=end

