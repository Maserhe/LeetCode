/*
 * @lc app=leetcode.cn id=205 lang=cpp
 *
 * [205] 同构字符串
 */

// @lc code=start
class Solution {
public:
    bool isIsomorphic(string s, string t) {

        // 因为 一 一 映射，所以建立两个映射关系。
        int m1[256] = {0}, m2[256] = {0};
        int n = s.size();
        while (n -- )
        {
            if (m1[s[n]] != m2[t[n]]) return false;
            m1[s[n]]  = n + 1;
            m2[t[n]] = n + 1;
        }
        return true;   
    }
};
// @lc code=end

