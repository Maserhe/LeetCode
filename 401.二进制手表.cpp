/*
 * @lc app=leetcode.cn id=401 lang=cpp
 *
 * [401] 二进制手表
 */

// @lc code=start
class Solution {
public:
    vector<string> readBinaryWatch(int num) {

        // 可以 先 分配 小时， 然后分配 分钟。
        // 1，分配 小时

        for (int i = 0; i <= num && i < 5; i ++ ){
            // 小时的 分配方式。一共 有 1 << (i - 1) 种 情况。
            string time;
            if (i) {
                for (int j = 1; j < 1 <<(i - 1); j ++ )

            }else
            {
                time = "0:"
            }
            
        }

    }
};
// @lc code=end

