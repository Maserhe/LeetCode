/*
 * @lc app=leetcode.cn id=290 lang=cpp
 *
 * [290] 单词规律
 */

// @lc code=start
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        string bucket[26];
        int index = 0;
        string temp = "";
        unordered_map<string, int> map;

        for (int i = 0; i < pattern.size(); i ++ ) {
            for (int j = index; j < s.size(); j ++ ){
                index ++ ;
                if (s[j] != ' ') temp += s[j];
                else break;
            }  
            if (i == pattern.size() - 1 && index != s.size()) return false;
            if (i != pattern.size() - 1 && index == s.size()) return false;

            if (bucket[pattern[i] - 'a'] == "" && map.find(temp) == map.end()) {
                bucket[pattern[i] - 'a'] = temp;  
                map[temp] = pattern[i] - 'a'; 
            }
            else if (bucket[pattern[i] - 'a'] != temp) return false;
            else if (map[temp] != pattern[i] - 'a') return false;
            temp = "";
        }
        return true;
    }
};
// @lc code=end

