/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 */

// @lc code=start

class Solution {
public:
    int getMaxLen(int l, int r, string& s) {
        while (l >= 0 && r < s.size() && s[l] == s[r]) l -- , r ++ ;
        return r - l - 1;
    }
    string longestPalindrome(string s) {

        int max = 0, start = 0;
        for (int i = 0; i < s.size(); i ++ ) {
            int curMax = std::max(getMaxLen(i, i, s), getMaxLen(i, i + 1, s));
            if (curMax > max) {
                max = curMax;
                start = i - ((curMax - 1) >> 1);
            }
        }
        string ans;
        for (int i = 0; i < max; i ++ ) ans += s[start + i];
        return ans;
    }
};
// @lc code=end

