/*
 * @lc app=leetcode.cn id=868 lang=cpp
 *
 * [868] 二进制间距
 */

// @lc code=start
class Solution {
public:
    int binaryGap(int n) {

        int ans = 0;
        int last = n & -n;
        n -= last;

        while (n)
        {
            int t = n & -n;
            ans = max(ans, (int)(log(t/last)/log(2)));
            n -= t;
            last = t;
        }
        return ans;
    }
};
// @lc code=end

