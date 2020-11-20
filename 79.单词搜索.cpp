/*
 * @lc app=leetcode.cn id=79 lang=cpp
 *
 * [79] 单词搜索
 */

// @lc code=start
bool flag[210][210];
class Solution {
public:
    
    bool dfs(vector<vector<char>> & board, string & word, int index, int x, int y){
        if (index == word.size()) return true;
        int dx[4] = {1, 0, -1, 0};
        int dy[4] = {0, 1, 0, -1};
        
        for (int i = 0; i < 4; i ++ ) {
            int m = x + dx[i];
            int n = y + dy[i];

            if (m < 0 || m >= board.size() || n < 0 || n >= board[0].size()) continue;

            if (!flag[m][n] && word[index] == board[m][n]){
                flag[m][n] = true;
                if (dfs(board, word, index + 1, m, n)) return true;
                flag[m][n] = false;
            }
        }
        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int x = board.size();
        int y = board[0].size();

        for (int i = 0; i < x; i ++ ) {
            for (int j = 0; j < y; j ++ ) {
                if (word[0] == board[i][j]) {
                    memset(flag, 0, sizeof (flag));
                    flag[i][j] = true;
                    if (dfs(board, word,1, i, j)) return true;
                }
            }
        }
        return false;
    }
};
// @lc code=end

