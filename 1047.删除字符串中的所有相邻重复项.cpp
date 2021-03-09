/*
 * @lc app=leetcode.cn id=1047 lang=cpp
 *
 * [1047] 删除字符串中的所有相邻重复项
 */

// @lc code=start
class Solution {
public:
    string removeDuplicates(string S) {
        string ans;
        for (char i: S) {
            if (ans.size() && ans.back() == i) ans.pop_back();
            else ans += i;
        }
        
        return ans;
    }
};
// @lc code=end

