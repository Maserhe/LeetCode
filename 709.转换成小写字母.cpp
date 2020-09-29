/*
 * @lc app=leetcode.cn id=709 lang=cpp
 *
 * [709] 转换成小写字母
 */

// @lc code=start
class Solution {
public:
    string toLowerCase(string str) {
        
        int n = str.size();
        for (int i = 0; i < n; i ++ ){
            if (str[i] >= 'A' && str[i] <= 'Z') str[i] += 32;
        }
        return str;
    }
};
// @lc code=end

