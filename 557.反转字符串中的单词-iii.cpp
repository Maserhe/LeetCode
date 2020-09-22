/*
 * @lc app=leetcode.cn id=557 lang=cpp
 *
 * [557] 反转字符串中的单词 III
 */

// @lc code=start
class Solution {
public:
    string reverseWords(string s) {

        //单词 由 空格 分割。
        int n = s.size();
        int l = 0, r = n - 1; // 如果 只有一个 字符串。直接r = n - 1;

        for (int i = 0; i < n; i ++ ){
            if (s[i] == ' ') {
                r = i - 1;
                while (l < r)
                {
                    char tmp = s[l];
                    s[l] = s[r];
                    s[r] = tmp;
                    l ++ ;
                    r -- ;
                }
                l = i + 1;
                r = n - 1;
            }
        }

        while (l < r){
            char tmp = s[l];
            s[l] = s[r];
            s[r] = tmp;
            l ++ ;
            r -- ;
        }

        return s;
    }
};
// @lc code=end

