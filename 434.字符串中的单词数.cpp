/*
 * @lc app=leetcode.cn id=434 lang=cpp
 *
 * [434] 字符串中的单词数
 */

// @lc code=start
class Solution {
public:

    // 老子写的，是标准答案，只是用例过不了，罢了。阻挡我的应该是语文功底。
    // 这题，真坑，", , , ,        a, eaefa" 6个单词？这特么，天王老子来了，也是两个单词。
    /*
    bool judge(char c){
        if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A' || c == 39 || c == 45)) return true;
        else return false;
    }
    int countSegments(string s) {

        int n = s.size();
        int sum =  0;
        bool flag = true;
        for (char i: s){
            if (flag && judge(i)) {
                sum ++ ;
                flag = false;
            }
            if (!judge(i)) flag = true;
        }
        return sum;
    }
    */
    int countSegments(string s) {
        s += ' ';
        int cnt = 0;
        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] != ' ' && s[i + 1] == ' ') {
                cnt++;
            }
        }
        return cnt;
    }

};
// @lc code=end

