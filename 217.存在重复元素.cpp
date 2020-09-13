/*
 * @lc app=leetcode.cn id=217 lang=cpp
 *
 * [217] 存在重复元素
 */

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_map<int,int> count;
        int n = nums.size();
        for (int i = 0; i < n; i ++ ){
            if (count[nums[i]] ++ ) return true;
        }
        return false;
    }
};
// @lc code=end

