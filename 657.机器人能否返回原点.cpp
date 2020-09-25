/*
 * @lc app=leetcode.cn id=657 lang=cpp
 *
 * [657] 机器人能否返回原点
 */

// @lc code=start
class Solution {
public:
    bool judgeCircle(string moves) {
        int sum[4] = {0};
        for (char i: moves){

            switch (i)
            {
            case 'U':
                sum[0] ++ ;
                break;
            case 'D':
                sum[1] ++ ;
                break;
            case 'R':
                sum[2] ++ ;
                break;
            case 'L':
                sum[3] ++ ;
                break;
            }
        }
        if (sum[0] == sum[1] && sum[2] == sum[3]) return true;
        else return false;
    }
};
// @lc code=end

