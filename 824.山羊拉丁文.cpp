/*
 * @lc app=leetcode.cn id=824 lang=cpp
 *
 * [824] 山羊拉丁文
 */

// @lc code=start
class Solution {
public:
    string toGoatLatin(string S) {
        string ans;
        int len = 1;
        int num = 1;
        while (len > 0)
        {
            len = S.find(' ');
            string tmp = S.substr(0, len);
            S = S.substr(len + 1);

            // 将分割好的 字符串。进行变成山羊拉丁文。
            if (tmp[0] != 'a' && tmp[0] != 'e' && tmp[0] != 'i' && tmp[0] != 'o' && tmp[0] != 'u' && tmp[0] != 'A' && tmp[0] != 'E' && tmp[0] != 'I' && tmp[0] != 'O' && tmp[0] != 'U') {
                // 以辅音字母开头。
                string tt = tmp.substr(1);
                tmp = tt + tmp[0];
            }
            tmp = tmp + "ma";
            for (int i = 0; i < num; i ++ ) tmp = tmp + 'a';
            num ++ ;
            if (ans.size()) ans = ans + ' ';
            ans += tmp;
        }
        
        return ans;
    }
};
// @lc code=end

