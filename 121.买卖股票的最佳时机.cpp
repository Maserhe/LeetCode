/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        /* 第一种解法
        if (!prices.size()) return 0;
        int n = prices.size();
        vector<int> mins(n,0);
        vector<int> maxs(n,0);

        int ans = 0;
        int mi = prices[0];
        int ma = prices[n - 1];

        for (int i = 0; i < n; i ++ ) {
            mi = min(mi, prices[i]);
            mins[i] = mi;
        }
        for (int i = n - 1; i >= 0 ; i -- ) {
            ma = max(ma, prices[i]);
            maxs[i] = ma;
        }
        for (int i = 0; i < n; i ++ )
            ans = max(ans, maxs[i] - mins[i]);
        return ans;
        */
       if (!prices.size()) return 0;
       int maxs = 0;
       int mins = prices[0];

       for (int i = 0; i < prices.size(); i ++ ) {
            if (prices[i] < mins) mins = prices[i];
            maxs = max(maxs, prices[i] - mins);
       }
       return maxs;
    }
};
// @lc code=end

