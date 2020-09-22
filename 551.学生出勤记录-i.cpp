/*
 * @lc app=leetcode.cn id=551 lang=cpp
 *
 * [551] 学生出勤记录 I
 */

// @lc code=start
class Solution {
public:
    bool checkRecord(string s) {
        int numL = 0; // L的 次数。
        int numA = 0; // A的 次数。
        char last = 'A';
        for (char i: s){
            if (i == 'A') numA ++ ;
            if (numA > 1) return false;
            if (i == 'L') {
                if (last != 'L') numL = 1;
                else numL ++ ;
                if (numL > 2) return false;
            }
            last = i;
        }

        return true;
    }
};
// @lc code=end

