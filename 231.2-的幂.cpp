/*
 * @lc app=leetcode.cn id=231 lang=cpp
 *
 * [231] 2的幂
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfTwo(int n) {

        // 方法一， 
        // 二的幂 一定是 1 后面 好多零。
        /*
        if (!n) return false;
        long x = n;
        return (x & (x - 1)) ==  0;
        */
       // 方法二， 我们可以借助 lowbit 
       if (!n) return false;
       long x = n;
       x = x - (x & -x);
       if (x) return false;
       else return true;
    }
};
// @lc code=end

