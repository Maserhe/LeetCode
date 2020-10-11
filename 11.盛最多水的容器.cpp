/*
 * @lc app=leetcode.cn id=11 lang=cpp
 *
 * [11] 盛最多水的容器
 */

// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) {
        // 双指针做法，两面夹击。
        // 找到 左边或者右边离 目标最远的距离。
        int ans = 0;

        int l = 0, r = height.size() - 1;

        while (l < r)
        {
            ans = max(ans, (r - l) * min(height[l], height[r]));
            if (height[l] > height[r]) r -- ;
            else l ++ ;
        }
        return ans;

    }
};
// @lc code=end

