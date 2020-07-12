/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         int size = s.size();
        vector<int> dict(256,-1);
        int maxlen = 0; //存结果
        int start = -1;
        for (int i=0;i<size;i++) {
            if (dict[s[i]] > start) { //再次遇见相同字符
                start = dict[s[i]];   //更新开始字符
            }
            dict[s[i]] = i;           //查表的形式存字符 
            maxlen = max(maxlen, i - start);
        }
        return maxlen;
    }
};
// @lc code=end

