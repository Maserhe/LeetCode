/*
 * @lc app=leetcode.cn id=453 lang=cpp
 *
 * [453] 最小移动次数使数组元素相等
 */

// @lc code=start
class Solution {
public:
    int minMoves(vector<int>& nums) {

        // 题意可理解位每次让一个值减去1，使得所有的值相等，
        // 那理想情况就是每个值最终等于最小值。那么题目就转换为所有值减去最小值的和。
        // 看的人题解。太秀了。找到最小值。


        long mi = __INT_MAX__;
        long sum = 0;
        int n = nums.size();
        for (int i: nums){
            if (i < mi) mi = i;
            sum += i;
        }
        int ans = sum - n * mi;
        return ans;
    }
};
// @lc code=end

