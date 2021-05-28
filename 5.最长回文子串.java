/*
 * @lc app=leetcode.cn id=5 lang=java
 *
 * [5] 最长回文子串
 */

// @lc code=start
class Solution {
    public String longestPalindrome(String s) {
        int max = 0;
        int start = 0;
        for (int i = 0; i < s.length(); i ++ ) {
            int len = Math.max(getLen(i, i + 1, s), getLen(i, i, s));
            if (len > max) {
                max = len;
                start = i - ((len - 1) >> 1);
            }
        }
        String ans="";
        for (int i = 0; i < max; i ++ ) {
            ans += s.charAt(i + start);
        }
        return ans;
    }

    public int getLen(int l, int r, String s) {
        int n = s.length();
        while (l >= 0 && r < n && s.charAt(l) == s.charAt(r)) {
            l -- ;
            r ++ ;
        }
        return r - l - 1;
    }
}
// @lc code=end

