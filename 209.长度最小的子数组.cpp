/*
 * @lc app=leetcode.cn id=209 lang=cpp
 *
 * [209] 长度最小的子数组
 */

// @lc code=start
class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {

        int n = nums.size();
        if (!n) return 0;
        int right = 0;
        int left = 0;
        int sum = nums[0];
        if (sum > s) return 1;
        int ans = __INT_MAX__;
        
        while (left < n) {
            if (right < n - 1 && sum < s) {
                right ++ ;
                sum += nums[right];
            }
            else {
                sum -= nums[left];
                left ++ ;
            }
            if (sum >= s) {
                ans = min(ans, right - left + 1);
            }
        }
        
        if (ans == __INT_MAX__) return 0;
        else return ans;
    }
};
// @lc code=end

