/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 */

// @lc code=start
class Solution {
public:
    string longestPalindrome(string s) {
        // 就是一个 kmp 求 next 数组。
        vector<int> next(s.size(), 0);
        string ans;

        next[0] = 1;
        for (int i = 0; i < s.size(); i ++ ) {
            
        }
    }
};
// @lc code=end

