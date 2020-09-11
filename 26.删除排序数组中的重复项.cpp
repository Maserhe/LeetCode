/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除排序数组中的重复项
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt = 0;
        if (nums.empty()) return 0; //特判
        for (int i = 1; i < nums.size(); i ++ ) {
            if (nums[cnt] == nums[i]) continue;
            nums[ ++ cnt] = nums[i];
        }

        return cnt + 1;
    }
};
// @lc code=end

