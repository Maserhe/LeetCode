/*
 * @lc app=leetcode.cn id=242 lang=cpp
 *
 * [242] 有效的字母异位词
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {

        // 字母桶 的 使用。
        // 单词数 相同， 字母的个数也要相同。
        // 用两个字母桶

        int bucket1[26] = {0};
        int bucket2[26] = {0};

        for (auto &tmp :s){
            bucket1[tmp - 97] ++ ;
        }

        for (auto &tmp :t) {
            bucket2[tmp - 97] ++ ;
        }

        for (int i = 0; i < 26; i ++ ){
            if (bucket1[i] != bucket2[i]) return false;
        }
        return true;

    }
};
// @lc code=end

