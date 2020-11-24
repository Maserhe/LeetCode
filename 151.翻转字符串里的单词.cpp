/*
 * @lc app=leetcode.cn id=151 lang=cpp
 *
 * [151] 翻转字符串里的单词
 */

// @lc code=start
class Solution {
public:
    string reverseWords(string s) {
        // 竟然是中等题？？？？
        vector<string> temp;
        string t;
        for (int i = 0; i < s.size(); i ++ ) {
            if (s[i] != ' '){
                t = t + s[i];
            }
            else {
                if (t.size()) {
                    temp.push_back(t);
                    t = "";
                }
            }
        }
        if (t.size()) temp.push_back(t);
        int  n = temp.size();
        if (n) t = temp[n - 1];

        for (int i = n - 2; i >= 0; i -- ) {
            t = t + " " + temp[i];
        }
        return t;
    }
};
// @lc code=end

