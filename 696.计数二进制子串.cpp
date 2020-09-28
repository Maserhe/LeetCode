/*
 * @lc app=leetcode.cn id=696 lang=cpp
 *
 * [696] 计数二进制子串
 */

// @lc code=start
class Solution {
public:
    int countBinarySubstrings(string s) {

        // 记录两种状态。
        // 分别记录。数量。
        int sum1 = 0;
        int sum0 = 0;
        int ans = 0;
        bool falg1 = false, falg0 = false;

        int n = s.size();

        for (int i = 0; i < n; ){

            if (!falg0){
                while (i < n && s[i] == '0')
                {
                    sum0 ++ ;
                    i ++ ;
                }
                falg0 = true;
            }

            if (!falg1){
                while (i < n && s[i] == '1')
                {
                    sum1 ++ ;
                    i ++ ;
                }
                falg1 = true;
            }

            if (falg1 && falg0) {
                ans += min(sum0, sum1);
               
                if (i < n){
                    if (s[i] == '1') { 
                        falg1 = false;
                        sum1 = 0;
                    }
                    else {
                        falg0 = false;
                        sum0 = 0;
                    }
                }
            }
                
        }
        //ans += min(sum1, sum0);
        return ans;
    }
};
// @lc code=end

