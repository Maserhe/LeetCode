/*
 * @lc app=leetcode.cn id=504 lang=cpp
 *
 * [504] 七进制数
 */

// @lc code=start
class Solution {
public:
    string convertToBase7(int num) {
        if (!num) return "0";
        string ans;
        bool flag = false;
        if (num < 0){
            num = - num;
            flag = true;
        }
        while (num){
            int t = num % 7;
            ans = to_string(t) + ans;
            num /= 7;
        }
        if (flag) ans = "-" + ans;

        return ans;

    }
};
// @lc code=end

