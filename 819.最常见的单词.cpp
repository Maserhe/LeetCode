/*
 * @lc app=leetcode.cn id=819 lang=cpp
 *
 * [819] 最常见的单词
 */

// @lc code=start
class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {

        // 自己记录新单词。
        unordered_map<string, int> map;
        
        string tmp;
        for (int i = 0; i < paragraph.size(); i ++ ) {
            char t = paragraph[i];
            if (t <= 'Z' && t >= 'A') tmp = tmp +  (char)(t + 32);
            else if (t <= 'z' && t >= 'a') tmp = tmp + t;
            else {
                if (tmp.size()) map[tmp] ++ ;
                tmp = "";
            }
        }
        if (tmp.size()) map[tmp] ++ ;
        // 将禁用单词过滤。
        for (string i: banned) {
            map[i] = 0;
        }
        string ans ;
        int ma = 0;
        for (auto i: map){
            if (ma < i.second) {
                ans = i.first;
                ma = i.second;
            }
        }
        return ans;
    }
};
// @lc code=end

