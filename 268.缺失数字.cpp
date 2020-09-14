/*
 * @lc app=leetcode.cn id=268 lang=cpp
 *
 * [268] 缺失数字
 */

// @lc code=start
class Solution {
public:
    int missingNumber(vector<int>& nums) {

        // 尽量不使用 额外空间。
        // 我可以用一个累加器 计数，然后减去当前值，最后剩下的就是 缺乏的那个数。
        int n = nums.size();
        int sum = n;
        for (int i = 0; i < n; i ++ )
        {
            sum += i;
            sum -= nums[i];
        }
        return sum;
    }
};
// @lc code=end
