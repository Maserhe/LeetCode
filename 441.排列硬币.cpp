/*
 * @lc app=leetcode.cn id=441 lang=cpp
 *
 * [441] 排列硬币
 */

// @lc code=start
class Solution {
public:
    int arrangeCoins(int n) {

        // 强行慢慢相减，应该很慢，
        // 1 + 2 + 3 + ... n;
        // n (1 + n) / 2 这是前n 项和 大于 n * n / 2; 
        
        //int sum = 0; 
        // 方法一，直接暴力求和公式有点慢。
        /*
        for (long i = 1; i <= n; i ++ ) {
            long long  sum = i * (i + 1) / 2;
            if (sum > n) return i - 1;
        }
        return n;
        */
        // 方法二，使用二分。
        if(!n) return 0;
        if(n == 1) return 1;
        int l = 0, r = n;
        // 找到最小的大于 n 的钱n 项和。
        while (l < r)
        {
            long mid = l + r >> 1;
            long sum = mid * (mid + 1) / 2;
            if (sum > n) r = mid;
            else l = mid + 1;
        }
        return l - 1;
    }
};
// @lc code=end

