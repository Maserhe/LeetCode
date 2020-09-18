/*
 * @lc app=leetcode.cn id=476 lang=cpp
 *
 * [476] 数字的补数
 */

// @lc code=start
class Solution {
public:
    int findComplement(int num) {
          
        int x=log2(num)+1;    
        return (unsigned)(1<<x)-num-1;//防止越界
    }
};
// @lc code=end

