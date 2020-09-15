/*
 * @lc app=leetcode.cn id=374 lang=cpp
 *
 * [374] 猜数字大小
 */

// @lc code=start
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int l = 0, r = n;
        while (l < r)
        {
            int mid = l + (r -l) /2;
            int ans = guess(mid);
            if (!ans) return mid;
            else if (ans == 1) l = mid + 1;
            else r = mid;
        }
        return n;
    }
};
// @lc code=end

