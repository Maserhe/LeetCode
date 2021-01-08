/*
 * @lc app=leetcode.cn id=189 lang=cpp
 *
 * [189] 旋转数组·
 */

// @lc code=start
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        /*
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
        */
       // 方法二， 没有使用 额外空间解法
        // 可以直接使用反转数组 进行解决。
        k %= nums.size();
        // 第一步将数组 反转
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};
// @lc code=end

