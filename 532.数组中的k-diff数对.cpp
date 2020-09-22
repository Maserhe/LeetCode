/*
 * @lc app=leetcode.cn id=532 lang=cpp
 *
 * [532] 数组中的K-diff数对
 */

// @lc code=start
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int sum = 0;
        int last = -__INT_MAX__;
        for (int i = 0; i < n - 1; i ++ ){
            for (int j = i + 1; j < n; j ++ ){
                if (last != nums[i] && nums[j] - nums[i] == k) {
                    sum ++ ;
                    last = nums[i];
                    break;
                }
                if (nums[j] > nums[i] + k ) break;
            }
        }
        return sum;
    }
};
// @lc code=end

