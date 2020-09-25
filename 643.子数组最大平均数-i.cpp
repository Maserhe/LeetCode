/*
 * @lc app=leetcode.cn id=643 lang=cpp
 *
 * [643] 子数组最大平均数 I
 */

// @lc code=start
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        // 先求一边 前缀和
        for (int i = 1; i < nums.size(); i ++ ) nums[i] += nums[i - 1];
        double ans = (double)nums[k - 1] / k;
        for (int i = k; i < nums.size(); i ++ ) ans = max(ans, (double)(nums[i] - nums[i - k ]) / k);
        return ans;
    }
};
// @lc code=end

