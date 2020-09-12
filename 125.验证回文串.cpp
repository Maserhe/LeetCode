/*
 * @lc app=leetcode.cn id=125 lang=cpp
 *
 * [125] 验证回文串
 */

// @lc code=start
class Solution {
public:

    //这里 还有 阿拉伯数字 也应该看作 是 字符， 不应该当作符号。
    bool isPalindrome(string s) {
        int l = 0, r = s.size() - 1;
        
        while (l < r){
            char a = s[l];
            char b = s[r];
            
            // 大写 转换为 小写
            if (a >= 'A' && a <= 'Z') a += 32;
            if (b >= 'A' && b <= 'Z') b += 32;

           
            if (a < '0' || (a > '9' && a < 'a') || a > 'z') {
                l ++ ;
                continue;
            }

            if (b < '0' || (b > '9' && b < 'a') || b > 'z') {
                r -- ;
                continue;
            }
            if (a != b) return false;
            l ++;
            r --;
        }
        return true;
    }
};
// @lc code=end

