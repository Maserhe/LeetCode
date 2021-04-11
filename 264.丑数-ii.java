/*
 * @lc app=leetcode.cn id=264 lang=java
 *
 * [264] 丑数 II
 */

// @lc code=start
class Solution {
    public int nthUglyNumber(int n) {
        
        int[] dp = new int[n + 1];
        dp[1] = 1;
        int a = 1, b = 1, c = 1;

        for (int i = 2; i <= n; i ++ ) {
            int num1 = dp[a] * 2;
            int num2 = dp[b] * 3;
            int num3 = dp[c] * 5;
            dp[i] = Math.min(num1, Math.min(num2, num3));
            if (dp[i] == num1) a ++ ;
            if (dp[i] == num2) b ++ ;
            if (dp[i] == num3) c ++ ;
        }

        return dp[n];
    }
}
// @lc code=end

