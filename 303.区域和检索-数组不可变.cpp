/*
 * @lc app=leetcode.cn id=303 lang=cpp
 *
 * [303] 区域和检索 - 数组不可变
 */

// @lc code=start
class NumArray {
public:
    // 提示了数组不可变，还是想用 前缀和。
    vector<int> sum;

    NumArray(vector<int>& nums) {
        int n = nums.size();
        if (n) {
            sum.resize(n);
            sum[0] = nums[0];
            for (int i = 1; i < n; i ++ ) sum[i] = sum[i - 1] + nums[i];
        }
    }   
    
    int sumRange(int i, int j) {
        if (i == 0) return sum[j];
        return sum[j] - sum[i - 1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
// @lc code=end

