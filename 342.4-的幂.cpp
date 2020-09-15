/*
 * @lc app=leetcode.cn id=342 lang=cpp
 *
 * [342] 4的幂
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfFour(int num) {
        if (!num) return false;
    
        // 优化。
        long x = num;
        if (x & (x - 1)) return false;
        // 换底
        double res = log10(num) / log10(4);
        // floor 向下曲取整。
        return res == floor(res);
        
    }
};
// @lc code=end

