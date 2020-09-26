/*
 * @lc app=leetcode.cn id=674 lang=cpp
 *
 * [674] 最长连续递增序列
 */

// @lc code=start
class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if (nums.empty()) return 0;
        int res = 1;
        int sum = 1;
        for (int i = 1; i < nums.size(); i ++ ){
            if (nums[i] > nums[i - 1]) {
                sum ++ ;
                res = max(res, sum);
            }
            else sum = 1;
        }
        return res;
    }
};
// @lc code=end

