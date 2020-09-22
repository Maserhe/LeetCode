/*
 * @lc app=leetcode.cn id=541 lang=cpp
 *
 * [541] 反转字符串 II
 */

// @lc code=start
class Solution {
public:
    string reverseStr(string s, int k) {

        int n = s.size();
        if (k >= n) {
            reverse(s.begin(), s.end());
            return s;
        }
        for (int i = 0; i * k < n; i += 2 ){
            int l = i *k;
            int r = (i + 1) * k - 1;
            if (r > n) r = n - 1;
            
            while (l < r)
            {
                char tmp = s[l];
                s[l] = s[r];
                s[r] = tmp;
                l ++ ;
                r -- ;
            }
        }
        return s;
    }
};
// @lc code=end

