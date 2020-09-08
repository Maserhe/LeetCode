/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */

// @lc code=start


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        
        string res = "";
        for (int j = 0; j < strs[0].size(); ++j) {//j遍历字符串集中的每个字符串
            char c = strs[0][j];
            for (int i = 1; i < strs.size(); ++i) {//i遍历搜索字符串中的字符          //每次取出第一个字符串的某一个位置的单词，然后遍历其他所有字符串的对应位置看是否相等，如果有不满足的直接返回res

                if (j >= strs[i].size() || strs[i][j] != c) {
                    return res;
                }
            }
            res.push_back(c);//如果都相同，则将当前字符存入结果，继续检查下一个位置的字符
        }
        return res;
    }
};
// @lc code=end

