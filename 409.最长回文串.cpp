/*
 * @lc app=leetcode.cn id=409 lang=cpp
 *
 * [409] 最长回文串
 */

// @lc code=start
class Solution {
public:
    int longestPalindrome(string s) {

        // 包含大写 ，字母 和 小写字母
        // 字母桶
        int bucket[256] = {0};
        for (char i : s) {
            bucket[i] ++ ;
        }
        int sum = 0;
        for (int i = 55; i < 150; i ++ ){
            if (bucket[i] > 1){
                sum = sum + bucket[i] - (bucket[i] % 2);
            }
        }
        if (s.size() > sum) sum ++ ;
        return sum;
    }
};
// @lc code=end

