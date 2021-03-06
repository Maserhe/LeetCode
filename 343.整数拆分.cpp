/*
 * @lc app=leetcode.cn id=343 lang=cpp
 *
 * [343] 整数拆分
 */

// @lc code=start
class Solution {
public:
    int integerBreak(int n) {
      if (n <= 3) return n - 1;
        vector<int> dp(n + 1, 0);
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 3;

        for (int i = 4; i <= n; i ++ ){
            for (int j = 0; j <= i/2; j ++ ){
                dp[i] = max(dp[i], dp[i - j] * dp[j]);
            }
        }        
        return dp[n];
    }
};
// @lc code=end

