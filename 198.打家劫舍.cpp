/*
 * @lc app=leetcode.cn id=198 lang=cpp
 *
 * [198] 打家劫舍
 */

// @lc code=start
class Solution {
public:
    int rob(vector<int>& nums) {
        // 动态规划，本来想的比较简单。例如， 2 1 1 2  一次跳过了两个。
        int n = nums.size();
        if (!n) return 0;
        if (n == 1) return nums[0];
        
        vector<int> ans(n,0);

        ans[0] = nums[0];
        ans[1] = max(nums[0], nums[1]);
        for (int i = 2; i < n; i ++ ){
            ans[i] = max(ans[i - 2] + nums[i] , ans[i - 1]);
        }

        return ans[n - 1];
    }
};
// @lc code=end

