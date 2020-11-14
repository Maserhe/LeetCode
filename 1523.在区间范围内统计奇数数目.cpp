/*
 * @lc app=leetcode.cn id=1523 lang=cpp
 *
 * [1523] 在区间范围内统计奇数数目
 */

// @lc code=start
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = 0;
        if (low&1) {
            ans ++ ;
            low ++ ;
        }
        if (high&1) {
            ans ++ ;
            high -- ;
        }

        ans += (high - low)/2;
        return ans;
    }
};
// @lc code=end

