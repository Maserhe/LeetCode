/*
 * @lc app=leetcode.cn id=202 lang=cpp
 *
 * [202] 快乐数
 */

// @lc code=start
class Solution {
public:
    bool isHappy(int n) {

        unordered_map<int, int> count;
        while (n != 1) {
            if (count[n] ++ ) return false;
            int sum = 0;
            while (n)
            {
               sum += (n % 10) * (n % 10);
               n /= 10;
            }
            n = sum;
        }
        return true;
    }
};
// @lc code=end

