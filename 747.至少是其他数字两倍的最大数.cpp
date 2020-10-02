/*
 * @lc app=leetcode.cn id=747 lang=cpp
 *
 * [747] 至少是其他数字两倍的最大数
 */

// @lc code=start
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        
        // 记录最大 值下标。 还有第二大的值。
        if (nums.size() == 1) return 0;
        int maxIndex = 0;
        int smax = - 100;
        for (int i = 1; i < nums.size(); i ++ ){
            if (nums[maxIndex] < nums[i]) {
                smax = nums[maxIndex]; // 更新第二大的 值。
                maxIndex = i;
            }
            else if (smax < nums[i]){
                smax = nums[i];
            }
        }
        if (nums[maxIndex] >= smax * 2) return maxIndex;
        else return -1;
    }
};
// @lc code=end

