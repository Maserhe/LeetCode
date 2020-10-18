/*
 * @lc app=leetcode.cn id=5543 lang=cpp
 *
 * [5543] 两个相同字符之间的最长子字符串
 */

// @lc code=start
class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int num[26] = {-1};
        for (int i = 0; i < 26; i ++ ) num[i] = -1;
        int ans = 0;
        for (int i = 0; i < s.size(); i ++ ){
            if (num[s[i] - 'a'] == -1) {
                num[s[i] - 'a'] = i;
                continue;
            }
            else ans = max(ans, i - num[s[i] - 'a']);
        }
        return ans - 1;
    }
};
// @lc code=end

