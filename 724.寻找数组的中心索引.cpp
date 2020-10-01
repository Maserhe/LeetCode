/*
 * @lc app=leetcode.cn id=724 lang=cpp
 *
 * [724] 寻找数组的中心索引
 */

// @lc code=start
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        // 使用前缀和，
        int n = nums.size();
        for (int i = 1; i < n; i ++ ) nums[i] += nums[i - 1];

        // 枚举每个点。
        for (int i = 0; i < n ; i ++ ){
            // 考虑边界问题，
            int left = (i == 0) ? 0: nums[i - 1];
            int right = (i == n - 1) ? 0: nums[n - 1] - nums[i];
            if (left == right) return i ;
        }
        return -1;
    }
};
// @lc code=end

