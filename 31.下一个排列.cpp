/*
 * @lc app=leetcode.cn id=31 lang=cpp
 *
 * [31] 下一个排列
 */

// @lc code=start
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // 从后往前， 找到第一个逆序的反转。如果没有。反转整个序列。
        int flag = 0;
        int i = nums.size() - 1;
        for(; i > 0; i--)
        {
            if(nums[i - 1] < nums[i])
            {
                flag = i - 1;
                break;
            }
        }
        // 1  3， 5， 6，3，7，4，5，6，7，4，3，2
        // 1  3， 5， 6，3，7，4，5，6，      7，4，3，2
        if(i == 0)//不存在下一个更大排列
            sort(nums.begin(),nums.end());//重新排成最小排列
        else
        {
            sort(nums.begin() + i,nums.end());
            int j = i;
            for(; j < nums.size(); j++)
                if(nums[j] > nums[flag]) break;//找到刚好大于a[flag]的数
            //交换两个数
            int t = nums[flag];
            nums[flag] = nums[j];
            nums[j] = t;
        }      
    }
};
// @lc code=end

