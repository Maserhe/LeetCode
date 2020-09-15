/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        // 边遍历边记录 相差位置。O(n)
        int n = nums.size();
        int sum = 0;
        for (int i = 0; i < n; i ++ ){
            if (nums[i] == 0){
                sum ++ ;
                continue;
            }
            nums[i - sum] = nums[i];
        }

        for (int i = 1; i <= sum; i ++ ){
            nums[n - i] = 0;
        }
    }
};
// @lc code=end

