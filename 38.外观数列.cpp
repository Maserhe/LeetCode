/*
 * @lc app=leetcode.cn id=38 lang=cpp
 *
 * [38] 外观数列
 */

// @lc code=start
class Solution {
public:
    string countAndSay(int n) {
        string ans = "1";
        for (int i = 2; i <= n; i++)
        {
            string tmp;
            for (int j = 0; j< ans.size();  )
            {
                int sum = 0;
                while(sum==0 || ans[j] == ans[j-1])
                {
                    sum ++;
                    j ++;  
                }
                tmp += to_string(sum);
                char a[2] = {ans[j - 1],0};
                string s = a;
                tmp += s;
                            
            }
            ans = tmp;
        }
        return ans;
    }
};
// @lc code=end

