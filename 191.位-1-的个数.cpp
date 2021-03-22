/*
 * @lc app=leetcode.cn id=191 lang=cpp
 *
 * [191] 位1的个数
 */

// @lc code=start
class Solution {
public:
    int hammingWeight(uint32_t n) {
        // 方法一 ， 暴力 枚举。线性时间复杂度。
        
        int ans = 0;
        for (int i = 0; i < 32; i ++ ){
            if (n & (1 << i)) ans ++ ;
        }
        return ans;
        
       // 方法二， 借助 lowbit , 效率最高。
       int ans = 0;
       while (n) {
           n -= n &(-n);
           ans ++ ;
       }
       return ans;
    }
};
// @lc code=end

