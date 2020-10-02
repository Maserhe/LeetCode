/*
 * @lc app=leetcode.cn id=746 lang=cpp
 *
 * [746] 使用最小花费爬楼梯
 */

// @lc code=start
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {

        int n = cost.size();
        // 当前点可以由一步 或者两步跳过来。
        vector<int> dp(n, 0);
        // dp[i] = min(dp[i - 1] , dp[i - 2]) + cost[i];
        dp[0] = cost[0];
        dp[1] = cost[1];
        for (int i = 2; i < n; i ++ ){
            dp[i] = min(dp[i - 1], dp[i - 2]) + cost[i];
        }
        return min(dp[n - 1], dp[n - 2]);
    }
};
// @lc code=end

