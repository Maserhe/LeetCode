/*
 * @lc app=leetcode.cn id=42 lang=cpp
 *
 * [42] 接雨水
 */

// @lc code=start
class Solution {
public:
    int trap(vector<int>& height) {

        int n = height.size();
        if (n < 2) return 0;
        int ans = 0;

        stack<int> st;

        for (int i = 0; i < n; i ++ ) {

            while (st.size() && height[st.top()] < height[i]) {

                int first = st.top();
                st.pop();

                if (!st.size()) break;
                int second = st.top();

                int h = min(height[i], height[second]) - height[first];
                int w = i - second - 1;
                ans += (h * w);

            }
            st.push(i);
        }
        return ans;

    }
};
// @lc code=end

