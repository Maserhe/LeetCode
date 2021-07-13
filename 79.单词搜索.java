/*
 * @lc app=leetcode.cn id=79 lang=java
 *
 * [79] 单词搜索
 */

// @lc code=start
class Solution {

    boolean[][] st;
    int n, m;

    public boolean dfs(int a, int b, String word, int index, char[][] board) {
        if (word.length() == index) return true;
        int[] dx = {-1, 0, 1, 0};
        int[] dy = {0, -1, 0, 1};
        for (int i = 0; i < 4; i ++ ) {
            int x = dx[i] + a;
            int y = dy[i] + b;
            if (x < 0 || x >= n) continue;
            if (y < 0 || y >= m) continue;
            if (st[x][y]) continue;
            if (word.charAt(index) == board[x][y]) {
                st[x][y] = true;
                if (dfs(x, y, word, index + 1, board)) return true;
                // 恢复现场。
                st[x][y] = false;
            }
        }
        return false;
    }
    public boolean exist(char[][] board, String word) {
        if (word == null || word.length() == 0) return false;
        n = board.length;
        m = board[0].length;
        st = new boolean[n][m];
        for (int i = 0; i < n; i ++ ) 
            for (int j = 0; j < m; j ++ ) 
                if (board[i][j] == word.charAt(0)){
                    st[i][j] = true;
                    if (dfs(i, j, word, 1, board)) return true;
                    st[i][j] = false;
                }
                    
                    
        return false;
    }
}
// @lc code=end

