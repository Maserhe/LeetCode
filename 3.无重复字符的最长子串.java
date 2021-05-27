/*
 * @lc app=leetcode.cn id=3 lang=java
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
class Solution {
    public int lengthOfLongestSubstring(String s) {

        int ans = 0;
        int[] arr = new int[256];
        for (int i = 0; i < arr.length; i ++ ) arr[i] = -1;
        int start = -1;
        for (int i = 0; i < s.length(); i ++ ) {
            if (arr[s.charAt(i)] > start) start = arr[s.charAt(i)];
            arr[s.charAt(i)] = i;
            ans = Math.max(ans, i - start);
        }

        return ans;
    }
}
// @lc code=end

