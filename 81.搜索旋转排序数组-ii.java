/*
 * @lc app=leetcode.cn id=81 lang=java
 *
 * [81] 搜索旋转排序数组 II
 */

// @lc code=start
class Solution {
    public boolean search(int[] nums, int target) {
        int l = 0;
        int r = nums.length - 1;
        while (l <= r) {
            while (l < r && nums[l] == nums[l + 1]) l ++ ;
            while (l < r && nums[r] == nums[r - 1]) r -- ;
            int mid = l + (r - l) / 2 ;
            if (nums[mid] == target) return true;
            if(nums[mid] >= nums[l]){
                if(target < nums[mid] && target >= nums[l]) r = mid-1;//target落在左半边
                else l = mid + 1;
            }
            else{//右半部分有序
                if(target>nums[mid]&&target<= nums[r]) l = mid+1;//target落在右半边
                else r = mid-1;
            }
        }
        return false;
    }
}
// @lc code=end

