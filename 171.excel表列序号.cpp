/*
 * @lc app=leetcode.cn id=171 lang=cpp
 *
 * [171] Excel表列序号
 */

// @lc code=start
class Solution {
public:
    int titleToNumber(string s) {
        int n = s.size();
        int ans = 0;
        for(int i = 0; i < n; i ++ ){
            ans *= 26;
            ans += s[i] - '@';
        }
        return ans;
    }
};
// @lc code=end

