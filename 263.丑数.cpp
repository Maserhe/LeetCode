/*
 * @lc app=leetcode.cn id=263 lang=cpp
 *
 * [263] 丑数
 */

// @lc code=start
class Solution {
public:
    bool isUgly(int num) {
        if (num == 0) return false;
        if (num == 1) return true;

        // 不断除以 2 ，3 ，5
        int res[3] = {2, 3, 5};
        for (int i = 0; i < 3; i ++ ){
            while (num % res[i] == 0)
            {
                num /= res[i];
            }
            
        }
        // 除完 之后 是 1， 不是零。别想成零了。
        if (num == 1) return true;
        else return false;
    }
};
// @lc code=end

