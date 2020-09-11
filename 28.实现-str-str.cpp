/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 实现 strStr()
 */

// @lc code=start

class Solution {
public:
    int strStr(string haystack, string needle) {

        if (needle.size() > haystack.size()) return -1;
        for (int i = 0; i < haystack.size() - needle.size() + 1; i ++ )
        {
            // 第一个是头 ， 第二个是 截取字符串的长度
            if (needle == haystack.substr(i, needle.size())) return i;
        }
        return -1;
    }
};
// @lc code=end
