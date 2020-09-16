/*
 * @lc app=leetcode.cn id=415 lang=cpp
 *
 * [415] 字符串相加
 */

// @lc code=start
class Solution {
public:
    string addStrings(string num1, string num2) {
        
        // 字符长度，较长。
        int n1 = num1.size();
        int n2 = num2.size();
        string ans;

        int k = 0;
        while (n1 || n2)
        {
            int a = 0;
            int b = 0;
            if (n1) a = num1[ -- n1] - '0';
            if (n2) b = num2[ -- n2] - '0';
            int t = a + b + k;
            ans = to_string(t % 10) + ans;
            k = t / 10;
        }
        
        return k ? to_string(1) + ans : ans;
    }
};
// @lc code=end

