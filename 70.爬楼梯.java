/*
 * @lc app=leetcode.cn id=70 lang=java
 *
 * [70] 爬楼梯
 */

// @lc code=start
class Solution {
    public int climbStairs(int n) {
        if (n == 1) return 1;
        int[] sum = new int[100];
        sum[0] = 0;
        sum[1] = 1;
        sum[2] = 2;

        for(int i=3;i<=n;i++){
         sum[i]=sum[i-2]+sum[i-1];
        }
        return sum[n];
        
    }
}
// @lc code=end

