/*
 * @lc app=leetcode.cn id=482 lang=cpp
 *
 * [482] 密钥格式化
 */

// @lc code=start
class Solution {
public:
    string licenseKeyFormatting(string S, int K) {


        // 这题本来写的没毛病，下次字符串相加 少再前面加。不然容易超时。
        // ans = "123" + ans; // 这种最好最后 改成 ans += "123" 然后最后使用一边 reverse。
        int n = S.size();
        string ans;
        int num = 0;
        while (n -- )
        {
            if (S[n] == '-') continue;
            if (S[n] >= 'a' && S[n] <= 'z') S[n] -= 32;

            if ( num == K ){
                ans += '-';
                num -= K;
            }
            ans += S[n];
            num ++ ;
            
        }
        reverse(ans.begin(), ans.end()); 
        return ans;
        
    }
};
// @lc code=end

