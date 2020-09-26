/*
 * @lc app=leetcode.cn id=665 lang=cpp
 *
 * [665] 非递减数列
 */

// @lc code=start
class Solution {
public:
    bool checkPossibility(vector<int>& nums) {

        // 计算 正序对的 个数。
       int sum = 0;

        for(int i = 1; i < nums.size();i ++ ){
            if(nums[i-1] > nums[i]){
                sum ++ ;
                if(sum >= 2) return false;
                // 改变 拐点 的 方法 有两种，后一个 下移动， 当前这一位上移动。
                if(i - 2 >= 0 && nums[i-2] > nums[i]){
                    nums[i] = nums[i-1];                
                }
                else nums[i-1]=nums[i];
            }
        }
        return true;
    }
};
// @lc code=end

