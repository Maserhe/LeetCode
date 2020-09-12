/*
 * @lc app=leetcode.cn id=122 lang=cpp
 *
 * [122] 买卖股票的最佳时机 II
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // 如果明天 比今天 价格 高 ，我就买了在卖。
        int res = 0;
        int n = prices.size();
        for (int i = 1; i < n; i ++ ){
            if (prices[i] > prices[i - 1]) res += prices[i] - prices[i-1];
        }
        return res;
    }
};
// @lc code=end

