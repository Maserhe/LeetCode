/*
 * @lc app=leetcode.cn id=485 lang=cpp
 *
 * [485] 最大连续1的个数
 */

// @lc code=start
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int n = nums.size();
        int sum = 0, res = 0;

        for (int i = 0; i < nums.size(); i ++ ) 
            if (nums[i]) sum ++ ;
            else {
                res = max(res, sum);
                sum = 0;
            }
        
        return max(res, sum);
    }
};
// @lc code=end

