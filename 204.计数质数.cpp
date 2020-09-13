/*
 * @lc app=leetcode.cn id=204 lang=cpp
 *
 * [204] 计数质数
 */

// @lc code=start
class Solution {
public:
    int countPrimes(int n) {
        
        // 方法一, 会超时。
        // 试除法 筛质数。 效率有点低。
        /*
        if (!n || n == 1) return 0;
        int sum = 0;
        for (int i = 2; i < n; i ++ ){
            bool flag = true;
            for (int j = 2; j <= sqrt(i); j ++ ){
                if (i % j == 0 ){
                    flag = false;
                    break;
                }
            }
            if (flag) sum ++ ;
        }
        return sum;
        */
        // 方法二， 埃及筛法, 但是会重复，标记。接近线性筛法。
        
        int sum = 0;
        vector<int> nums(n + 1, 0);

        for (int i = 2; i < n; i ++ ) {
            if (nums[i]) continue;
            sum ++ ;          
            for (int j = 1; j <= n/i; j ++ ) nums[i * j] = 1;
        }
        return sum;
        
        // 方法三， 线性筛法， 不想写了。代码有点长。
        
    

    }                                   
};
// @lc code=end

