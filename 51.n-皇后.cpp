/*
 * @lc app=leetcode.cn id=51 lang=cpp
 *
 * [51] N 皇后
 */

// @lc code=start
class Solution {
public:
    vector<string> temp;
    vector<vector<string>> ans;
    string res;

    void dfs(int x) {

        int n = cows.size();
        if (x == n) {
            ans.push_back(temp);
            return;
        }

        string t = res;
        for (int i = 0; i < n; i ++ ) {
            if (cows[i] || left[n - x + i] || right[x + i]) continue;
            cows[i] = true;
            left[n - x + i] = true;
            right[x + i] = true;
            
            dfs(cows, left, right, x + 1);

            cows[i] = false;
            left[n - x + i] = false;
            right[x + i] = false;

        }

    }

    vector<vector<string>> solveNQueens(int n) {
        vector<bool> cows(n, false);
        vector<bool> left(2 * n, false);
        vector<bool> right(2* n, false);
        dfs(cows, left, right, 0);
    }
};
// @lc code=end

