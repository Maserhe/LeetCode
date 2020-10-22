/*
 * @lc app=leetcode.cn id=8 lang=cpp
 *
 * [8] 字符串转换整数 (atoi)
 */

// @lc code=start
class Solution {
public:
    int myAtoi(string str) {
        long ans = 0;
        int l = 0;
        bool flag = false;
        while(str[l] == ' ') l ++ ;
        if (('0' > str[l] || str[l] > '9')){
            if (str[l] == '-'){
                l ++ ;
                flag = true;
            } else if (str[l] == '+') l ++ ;
            else return 0;
        }
        
        for (int i = l; i < str.size(); i ++ ){
            if (str[i] >= '0' && str[i] <= '9') {
                ans *= 10;
                ans += str[i] -'0';
                if (ans > INT_MAX) return flag? INT_MIN: INT_MAX;
            } else break;
        }
        return flag ? (int)-ans:(int)ans;
    }
};
// @lc code=end

