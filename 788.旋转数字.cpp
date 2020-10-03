/*
 * @lc app=leetcode.cn id=788 lang=cpp
 *
 * [788] 旋转数字
 */

// @lc code=start
class Solution {
public:
    int rotatedDigits(int N) {
        // 计算 方法 一
        // 只 包含， 1 ， 8， 0，
        // 只有含有。包含 3， 4， 7，都是坏数。

        // 动态规划 写法。
        vector<int> dp(N + 1, 0);
        int ans = 0;
        for (int i = 1; i <= N; i ++ ){
            // 只要包含 3， 4 ，7 都是坏数。
            if (i == 3 || i == 4 || i == 7 || dp[i % 10] == 1 || dp[i / 10] == 1) {
                dp[i] = 1;
            }
            // 只要包含包含 一个 2 5 6 9  就是好数。
            else if (i == 2 || i == 5 || i == 6 || i == 9 || dp[i / 10] == 2 || dp[i % 10] == 2) {
                dp[i] = 2;
                ans ++ ;
            }
        }
        return ans;
    }
};
// @lc code=end

