/*
 * @lc app=leetcode.cn id=448 lang=cpp
 *
 * [448] 找到所有数组中消失的数字
 */

// @lc code=start
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        // 方法一， 哈希，写了没意思。
        // 方法二，改变下标为 负数。
        int n = nums.size();
        // 按当前值，的下面索引 为负数。
        for (int i = 0; i < n; i ++ ) {
            if (nums[abs(nums[i]) - 1] > 0) nums[abs(nums[i]) - 1] *= -1;
        }

        vector<int> ans;
        for (int i = 0; i < n; i ++ ) {
            if(nums[i] > 0) ans.push_back(i + 1);
        }
        return ans;
    }
};
// @lc code=end

