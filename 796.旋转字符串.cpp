/*
 * @lc app=leetcode.cn id=796 lang=cpp
 *
 * [796] 旋转字符串
 */

// @lc code=startb.size()
class Solution {
public:
    bool rotateString(string A, string B) {
        if (A.size() != B.size()) return false;
        A += A;
        return A.find(B) != -1;
    }
};
// @lc code=end

