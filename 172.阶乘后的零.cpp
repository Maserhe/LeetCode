/*
 * @lc app=leetcode.cn id=172 lang=cpp
 *
 * [172] 阶乘后的零
 */

// @lc code=start
class Solution {
public:
    int trailingZeroes(int n) {
        
        //方法 一 ， 自动 去尾零 ，数据大会爆出 long long
        /*
        long long sum = 1;
        int ans = 0;
        for (int i = 2; i <= n; i ++ ){
            sum *= i;
            while ( sum % 10 == 0 ) {
                ans ++;
                sum /= 10;
            }
        }
        return ans;
        */
       // 方法 二， 当 n 大于 二 时 ，显然 只要有一个乘 因子5 就会有一个 0
        int count = 0;
        while (n > 1)
            count += (n /= 5);
        return count;
    }
};
// @lc code=end

