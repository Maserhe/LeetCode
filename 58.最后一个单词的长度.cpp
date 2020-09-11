/*
 * @lc app=leetcode.cn id=58 lang=cpp
 *
 * [58] 最后一个单词的长度
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {

        int num = 0;
        for (int i = 0; i < s.size(); i ++ )
        {
            if (s[i] == ' ') continue;
            else {
                if (i != 0 && s[i - 1] == ' ') num = 0;  //判断上一个是否是 空格
                num ++ ;
            }
        }
        return num;
    }
};
// @lc code=end

