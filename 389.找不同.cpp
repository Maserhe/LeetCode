/*
 * @lc app=leetcode.cn id=389 lang=cpp
 *
 * [389] 找不同
 */

// @lc code=start
class Solution {
public:
    char findTheDifference(string s, string t) {
        int e1[26] = {0};
        int e2[26] = {0};
        for (char i : s) e1[i - 97] ++ ;
        for (char i : t) e2[i - 97] ++ ;

        for (int i = 0; i < 26; i ++ ){
            if (e1[i] != e2[i]) return (char)(i + 97);
        }
        return '0';
    }
};
// @lc code=end

