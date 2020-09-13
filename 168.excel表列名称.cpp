/*
 * @lc app=leetcode.cn id=168 lang=cpp
 *
 * [168] Excel表列名称
 */

// @lc code=start
class Solution {
public:
    string convertToTitle(int n) {
       
       string ans;
       while (n) {
           ans = (char)( -- n % 26 + 'A') + ans; // -- n 是当前 权位 的 需求， 与高位 无关。 
           n /= 26;
       }
       return ans;
    }
};
// @lc code=end

