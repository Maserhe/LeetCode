/*
 * @lc app=leetcode.cn id=762 lang=cpp
 *
 * [762] 二进制表示中质数个计算置位
 */

// @lc code=start
class Solution {
public:
    bool judge(int n){
        int sum = 0;
        while (n)
        {
            int t = n & -n;
            n -= t;
            sum ++ ;
        }
        // 1 不是 质数。
        if (sum == 1) return false;
        for (int i = 2; i <= sum / i; i ++ ){
            if (sum % i == 0) return false;
        }
        return true;
    }
    int countPrimeSetBits(int L, int R) {
        
        // 快速求 1 ，可以使用 自减法加 lowbit
        int ans = 0;
        for (int i = L; i <= R; i ++ ) {
            if (judge(i))  ans ++ ;
        }
        return ans;
    }
};
// @lc code=end

