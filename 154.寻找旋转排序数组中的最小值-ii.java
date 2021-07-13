/*
 * @lc app=leetcode.cn id=154 lang=java
 *
 * [154] 寻找旋转排序数组中的最小值 II
 */

// @lc code=start
class Solution {
    public int findMin(int[] nums) {
        if (nums.length == 1) return nums[0];
        int l = 0, r = nums.length - 1;
        while (l < r) {
            if(nums[l] == nums[r]) {
                r -- ;
                continue;
            } 
            int mid = l + r >> 1;
            if (nums[mid] > nums[r]) l = mid + 1;
            else r = mid;

        }
        return nums[r];
    }
}
// @lc code=end

