/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

// @lc code=start
int sum = 0;
class Solution {
public:

    
    int climbStairs(int n) {
        // 递归写法 ， 会超时
        /*
        if (n == 0) return 1;
        if (n < 0) return 0;
        return climbStairs(n-1) + climbStairs(n-2);
        */

        // 动态规划
        if (n == 1) return 1;
        int sum[100];
        sum[0] = 0;
        sum[1] = 1;
        sum[2] = 2; 

        for(int i=3;i<=n;i++){
         sum[i]=sum[i-2]+sum[i-1]; // 可以 爬 一步， 或者 两步 走到当前台阶
        }
        return sum[n];
    }
};
// @lc code=end

