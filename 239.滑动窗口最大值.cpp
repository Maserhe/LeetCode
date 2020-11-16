/*
 * @lc app=leetcode.cn id=239 lang=cpp
 *
 * [239] 滑动窗口最大值
 */

// @lc code=start
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        int n = nums.size();
        if (!n) return {};
        deque<int> q;
        vector<int> ans;
        for (int i = 0; i < n; i ++ ) {
            while (!q.empty() && nums[q.back()] < nums[i]) q.pop_back();
            q.push_back(i);

            if (i - k == q.front()) q.pop_front();
            if (i >= k - 1) ans.push_back(nums[q.front()]); // 下标从0 开始。
        }

        return ans;
    }
};
// @lc code=end

