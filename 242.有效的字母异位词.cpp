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

        if (s.size() != t.size()) return false;
        int bucket[26] = {0};
        
        for (int i = 0; i < s.size(); i ++ ) {
            bucket[t[i] - 'a'] ++ ;
            bucket[s[i] - 'a'] -- ;
        }
        for (int i = 0; i < 26; i ++ ){
            if (bucket[i] != 0) return false;
        }
        return true;
    }
};
// @lc code=end

