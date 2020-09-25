/*
 * @lc app=leetcode.cn id=633 lang=cpp
 *
 * [633] 平方数之和
 */

// @lc code=start
class Solution {
public:
    // 暴力写法，方法一， 会 超时。
    /*
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
    */
    bool judgeSquareSum(int c) {
        
    long i = 0, j = sqrt(c);
        while (i <= j) 
            if (i * i + j * j == c) return true;
            else if (i * i + j * j > c) j --;
            else i ++ ;
        return false;
    }
     
};
// @lc code=end

