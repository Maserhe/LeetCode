/*
 * @lc app=leetcode.cn id=219 lang=cpp
 *
 * [219] 存在重复元素 II
 */

// @lc code=start
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        int n = nums.size();
        unordered_map<int,int> count; //存储最大的最后一次出现该数的下标加一。

        for (int i = 0; i < n; i ++ ) {
            if (count[nums[i]] && i - count[nums[i]] < k ) return true; 
            else count[nums[i]] = i + 1;
        }

        return false;        
    }
};
// @lc code=end

