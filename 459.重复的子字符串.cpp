/*
 * @lc app=leetcode.cn id=459 lang=cpp
 *
 * [459] 重复的子字符串
 */

// @lc code=start
class Solution {
public:
    bool repeatedSubstringPattern(string s) {

        // 第一种方法。朴素算法。
        /*
        int n = s.size();
        for (int i = 1; i * 2 <= n; ++i) {
            if (n % i == 0) {
                bool match = true;
                for (int j = i; j < n; ++ j) {
                    if (s[j] != s[j - i]) {
                        match = false;
                        break;
                    }
                }
                if (match) {
                    return true;
                }
            }
        }
        return false;
        */
        // 如果存在 重复字串，那么 下一次查找肯定，会在结束之前查找到。
        // return (s + s).find(s, 1) != s.size(); 

        // kmp 算法。
        

    }
};
// @lc code=end

