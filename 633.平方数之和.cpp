/*
 * @lc app=leetcode.cn id=633 lang=cpp
 *
 * [633] 平方数之和
 */

// @lc code=start
class Solution {
public:
    bool judge(int n){
        int i = 1;
        while (n > 0)
        {
            n -= i;
            i += 2;
        }
        if (!n) return true;
        else return false;
    }

    bool judgeSquareSum(int c) {

        // c 是两个数 和， 由于对称性，我们只需要记录一半就行了。
        double sq = sqrt(c);

        for (int i = 0; i <= c / 2; i ++ ) {
            
            if (judge(i) && judge(c - i)) return true;
        }
           
        return false;
    }
};
// @lc code=end

