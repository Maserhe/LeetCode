/*
 * @lc app=leetcode.cn id=392 lang=cpp
 *
 * [392] 判断子序列
 */

// @lc code=start
class Solution {
public:
    bool isSubsequence(string s, string t) {

        int n1 = s.size(), n2 = t.size();

        if (!n1) return true;
        if (!n2) return false;

        while (n1 && n2 )
        {
            if (s[n1 -1] == t[n2 - 1]) n1 --, n2 -- ;
            else n2 -- ;
        }
        if (!n1)  return true;
        else return false;
    }
};
// @lc code=end

