/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {

        // 计算平方根的 算法。 由奇数的前 n 项和 可以计算得到。
        int ans = 0;
        while (x >= 0){
            ans ++;
            x -= 2*ans - 1;
        }
        return ans - 1;    
    }
};
// @lc code=end

