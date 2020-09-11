/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int l = 0 , r = nums.size();
        while (r > l) {
            int mid = l + r >> 1;
            if (nums[mid] > target) r = mid ; // 两个只能有一个 加一或者减一， 
            // 如果 为 l = mid 则 l + r  + 1 >> 1;
            else if (nums[mid] < target)  l = mid + 1;
            else return mid;
        }
        return l;
    }
};
// @lc code=end

