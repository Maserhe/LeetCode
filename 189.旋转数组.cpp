/*
 * @lc app=leetcode.cn id=189 lang=cpp
 *
 * [189] 旋转数组·
 */

// @lc code=start
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        // 重新 开了一个 容器，记录，肯定不是最优解。
        vector<int> ans;
        int n = nums.size();
        ans.resize(n);
        for (int i = 0; i < n; i ++ ) {
            ans[(i + k )%n] = nums[i];
        }
        for (int i = 0; i < n; i ++ ) {
            nums[i] = ans[i];
        }
    }
};
// @lc code=end

