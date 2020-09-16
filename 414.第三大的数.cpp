/*
 * @lc app=leetcode.cn id=414 lang=cpp
 *
 * [414] 第三大的数
 */

// @lc code=start
class Solution {
public:
    int thirdMax(vector<int>& nums) {

        // 方法 一， 记录三种 状态。
        // 记录 三个 值，最大， 第二大， 最小。
        
        long long m1 = -3e9, m2 = -3e9, m3 = -3e9;
        int n = nums.size();
        for (int i = 0; i < n; i ++ ) {
            if (nums[i] == m1 || nums[i] == m2 || nums[i] == m3) continue;
            if (nums[i] > m1) {
                m3 = m2;
                m2 = m1;
                m1 = nums[i];
            }
            else if (nums[i] > m2){
                m3 = m2;
                m2 = nums[i];
            }
            else if (nums[i] > m3){
                m3 = nums[i];
            }
        }
        if (m1 != -3e9 && m2 != -3e9 && m3 != -3e9 )  return m3;
        else return m1;
      

    }
};
// @lc code=end

