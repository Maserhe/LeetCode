/*
 * @lc app=leetcode.cn id=387 lang=cpp
 *
 * [387] 字符串中的第一个唯一字符
 */

// @lc code=start
#include<cstring>

class Solution {
public:
    int firstUniqChar(string s) {
        
        int hash[26] = {0};
        for (int i =0; s[i]; i ++) hash[s[i] - 'a'] ++;
        for (int i =0; s[i]; i ++) 
            if (hash[s[i] - 'a'] == 1) return i;
        return -1;
    }
};
// @lc code=end

