/*
 * @lc app=leetcode.cn id=693 lang=cpp
 *
 * [693] 交替位二进制数
 */

// @lc code=start
class Solution {
public:
    bool hasAlternatingBits(int n) {


        // 使用 lowbit 连续获取低位的1。
        int last = 1;
        if (n%2 == 0) last = 0;
        else n -= 1;
        
        while (n)
        {
            int lowbit = n & -n;
            n -= lowbit;
            
            lowbit = log2(lowbit) + 1;

            if (lowbit  == last + 2) {
                last = lowbit;
            } else return false;   
        }
        return true;
    }
};
// @lc code=end

