/*
 * @lc app=leetcode.cn id=299 lang=cpp
 *
 * [299] 猜数字游戏
 */

// @lc code=start
class Solution {
public:
    string getHint(string secret, string guess) {
        
        // 寻找两个元素 共有的元素个数， 
        // 减去 匹配 的 个数 得到 错误的个数
        int s[10] = {0};
        int g[10] = {0};
 
        int right = 0;

        int n = secret.size();
        for (int i = 0; i < n; i ++ ){
            if (secret[i] == guess[i]) right ++ ;
            else {
                s[secret[i] - '0'] ++ ;
                g[guess[i] - '0'] ++ ;
            }
        }
        int wrong = 0;
        for (int i = 0; i < 10; i ++ ){
            // 最小的就是两个都有的。
            if (s[i] && g[i]) wrong += min(s[i], g[i]);
        }

        string ans = to_string(right) + "A" + to_string(wrong) + "B";
        return ans;

    }
};
// @lc code=end

