/*
 * @lc app=leetcode.cn id=55 lang=cpp
 *
 * [55] 跳跃游戏
 */

// @lc code=start
class Solution {
public:
    /* 方法一， 差一个用例。
    vector<bool> st;
    bool dfs(vector<int>& nums, int index) {

        if (index == nums.size() - 1) return true;
        for (int i = 1; i <= nums[index]; i ++ ) {
            if (index + i >= nums.size()) continue;
            if (st[index + i]) continue;
            st[index + i] = true;
            if (dfs(nums, index + i)) return true;
        }
        return false;
    }
    */
    bool canJump(vector<int>& nums) {
        
        if (nums.size() < 2) return true;
        int cover = nums[0];
        for (int i = 1; i <= cover; i ++ ) {
            cover = max(cover, nums[i] + i);
            if (cover >= nums.size() - 1) return true;
        }
        
        return false;
    }
};
// @lc code=end

