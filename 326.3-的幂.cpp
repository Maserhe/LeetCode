/*
 * @lc app=leetcode.cn id=326 lang=cpp
 *
 * [326] 3的幂
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfThree(int n) {

        
        // 方法一， 一直除以3
        /*
        if (!n) return false;
        if (n == 1) return true;
        while (n % 3 == 0)
        {
            n /= 3;
            if (n == 1) return true;
        }
        return false;
        */
        // 换底公式 
        if (n == 1) return true;
        if (n % 3 != 0 || n == 0) return false;
        
        double a = log10(n) / log10(3) ;   //换底
        return a == floor(a); 

    }
};
// @lc code=end

