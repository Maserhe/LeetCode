/*
 * @lc app=leetcode.cn id=507 lang=cpp
 *
 * [507] 完美数
 */

// @lc code=start
class Solution {
public:
    bool checkPerfectNumber(int num) {

        if (!num) return false;
        // 试 除法 , 正因子总是成对出现。只要计算到 根号N 就行。
        int sum = 0;
        for (int i = 1; i * i <= num; i ++ ){
            if (num % i == 0){
                sum += i;
                if (i != num / i) sum +=  num / i;
            }
        }
        if (sum == num * 2) return true;
        else return false;
    }
};
// @lc code=end

