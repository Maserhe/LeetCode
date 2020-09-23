/*
 * @lc app=leetcode.cn id=581 lang=cpp
 *
 * [581] 最短无序连续子数组
 */

// @lc code=start
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {

        bool flag = false;
        int mmax = INT_MIN;
        int mmin = INT_MAX;
        for (int i = 1; i < nums.size(); ++ i)
        {
             if(nums[i]<nums[i-1])
                flag=true;
             if(flag)
                mmin=min(mmin,nums[i]);
        }
        flag = false;
        for (int i = nums.size()-2; i >= 0; -- i)
        {
             if(nums[i] > nums[i+1])
                flag = true;
             if(flag)
                mmax = max(mmax, nums[i]);
        }
        int l,r;

        for (l = 0;l < nums.size(); ++ l)
        {
            if (nums[l] > mmin)
                break;
        }
        for (r = nums.size() - 1;r >= 0; -- r)
        {
            if(nums[r] < mmax)
                break;
        }
        return r-l > 0?(r - l + 1):0;
    }
};
// @lc code=end

