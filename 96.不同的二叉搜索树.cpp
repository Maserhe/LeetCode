/*
 * @lc app=leetcode.cn id=96 lang=cpp
 *
 * [96] 不同的二叉搜索树
 */

// @lc code=start
class Solution {
public:
    int numTrees(int n) {
        // 可以使用动态规划来做。
        if (!n) return 0;
        vector<int> dp(n + 1, 0);
        dp[0] = 1;
        dp[1] = 1;

        // 分为左右两边的树。
        for (int i = 2; i <= n; i ++ )           // 最多含有几个节点。 下一层范围 0 到 i - 1
            for (int j = 0; j < i; j ++ ){       // 划分左右的 隔点。
                dp[i] += dp[i - j - 1] * dp[j];  // 左边加右边。
            }
        return dp[n];
    }
};
// @lc code=end

