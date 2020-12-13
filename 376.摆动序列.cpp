/*
 * @lc app=leetcode.cn id=376 lang=cpp
 *
 * [376] 摆动序列
 */

// @lc code=start
class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        
        if (!nums.size()) return nums.size();
        int trend = 2;                                   //用来记录数列在上升还是下降，初始化以便考虑数列开头
        int sum = 1;
        for (int i = 1; i < nums.size(); ++ i){
            if (nums[i] != nums[i - 1]){                //跳过相同的
                sum += nums[i] > nums[i - 1] != trend;  //波峰与波谷转折的地方
                trend = nums[i] > nums[i - 1];          //更新数列在上升还是下降
            }
        }
        return sum;
    }
};
// @lc code=end

