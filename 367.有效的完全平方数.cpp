/*
 * @lc app=leetcode.cn id=367 lang=cpp
 *
 * [367] 有效的完全平方数
 */

// @lc code=start
class Solution {
public:
    bool isPerfectSquare(int num) {

        // 1, 3, 5, ....  2n - 1累加结果 刚好是 n*n
        int k = 1;
        while (num > 0) {
            num -= k;
            k += 2;
        }
        if (!num) return true;
        else return false;
    }
};
// @lc code=end

