/*
 * @lc app=leetcode.cn id=67 lang=cpp
 *
 * [67] 二进制求和
 */

// @lc code=start
class Solution {
public:
    string addBinary(string a, string b) {
        string res = "";

        int n = a.size() - 1, m = b.size() - 1, carry = 0;

        while (n >= 0 || m >= 0)
        {
            int p = n >= 0? a[n -- ] - '0': 0;
            int q = m >= 0? b[m -- ] - '0': 0;
            
            int sum = p + q + carry;
            res = to_string(sum % 2) + res;
            carry = sum / 2;
        }
        
        return carry > 0? "1" + res : res;
        
    }
};
// @lc code=end

