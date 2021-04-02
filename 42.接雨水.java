/*
 * @lc app=leetcode.cn id=42 lang=java
 *
 * [42] 接雨水
 */

// @lc code=start
class Solution {
    public int trap(int[] height) {

        int ans = 0;
        Stack<Integer> st = new Stack<>();

        for (int i = 0; i < height.length; i ++ ) {

            while (!st.isEmpty() && height[st.peek()] < height[i]) {
                int first = st.pop();
                if (st.isEmpty()) break;
                int second = st.peek();
                int h = Math.min(height[i], height[second]) - height[first];
                int w = i - second - 1;
                ans += (h * w);
            }
            st.add(i);
        }
        return ans;
    }
}
// @lc code=end

