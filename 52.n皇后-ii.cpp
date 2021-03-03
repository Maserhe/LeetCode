/*
 * @lc app=leetcode.cn id=52 lang=cpp
 *
 * [52] N皇后 II
 */

// @lc code=start
class Solution {
public:

    int ans;

    void dfs(vector<bool>& cows, vector<bool>& left, vector<bool>& right, int x) {
        int n = cows.size();
        if (x == n) {
            ans ++ ;
            return;
        }
        for (int i = 0; i < cows.size(); i ++ ) {
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

    int totalNQueens(int n) {
        ans = 0;
        vector<bool> cows(n, false);
        vector<bool> left(2 * n, false);
        vector<bool> right(2* n, false);
        dfs(cows, left, right, 0);
        return  ans;
    }
};
// @lc code=end

