/*
 * @lc app=leetcode.cn id=258 lang=cpp
 *
 * [258] 各位相加
 */

// @lc code=start
class Solution {
public:
    int addDigits(int num) {

        // 方法一， 循环写法。
        /*
        while (num >= 10)
        {
            int sum = 0;
            while (num)
            {
                sum += num % 10;
                num /= 10;  
            }
            num = sum;
        }
        return num;
        */
        // 方法二，查询了一下 资料，才知道这个东西叫做数字根，每9 个循环一次。
        return (num - 1) % 9 + 1;
    }
};
// @lc code=end

