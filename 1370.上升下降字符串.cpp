/*
 * @lc app=leetcode.cn id=1370 lang=cpp
 *
 * [1370] 上升下降字符串
 */

// @lc code=start
class Solution {
public:
    string sortString(string s) {
        
        int bucket[26] = {0};
        int count = 0;
        for (int i = 0; i < s.size(); i ++ ) {
            bucket[s[i] - 'a'] ++ ;
            count ++ ;
        }
        
        string ans;
        while (count != 0 ) {
            // 步骤一，
            for (int i = 0; i < 26; i ++ ) if (bucket[i]) {
                ans = ans + (char)(i + 'a');
                bucket[i] -- ;
                count -- ;
            }
            // 步骤二
            for (int i = 25; i >= 0; i -- ) if (bucket[i]) {
                ans = ans + (char)(i + 'a');
                bucket[i] -- ;
                count -- ;
            }
        }

        return ans;
    }
};
// @lc code=end

