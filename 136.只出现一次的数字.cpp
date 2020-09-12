/*
 * @lc app=leetcode.cn id=136 lang=cpp
 *
 * [136] 只出现一次的数字
 */

// @lc code=start
class Solution {
public:
    int singleNumber(vector<int>& nums) {

        // 方法 一 ， 代码短， 但是 时间复杂度 高。
        /*
        sort(nums.begin(), nums.end());
        int ans = 0;
        for (int i = 0; i < nums.size() - 1; i += 2 ){
            if (nums[i] != nums[i + 1] ) return nums[i];
        }
        return nums[nums.size() - 1];
        */

       // 方法二 ，可以使用 异或 ,线性的时间复杂度。
       int ans = 0;
       int n = nums.size();
       for (int i = 0; i < n; i ++ ){
           ans ^= nums[i];
       }
       return ans;

    }
};
// @lc code=end

