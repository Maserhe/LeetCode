/*
 * @lc app=leetcode.cn id=821 lang=cpp
 *
 * [821] 字符的最短距离
 */

// @lc code=start
class Solution {
public:
    vector<int> shortestToChar(string S, char C) {

        int n = S.size();
        vector<int> ans(n, 1e6);
        int min_len = 1e6;
        // 正向遍历一遍
        for (int i = 0; i < n; i ++ ) {
            if (S[i] == C) min_len = 0;
            ans[i] = min_len ++ ;
        }
        // 反向遍历一边。
        min_len = 1e6;
        for (int i = n -1; i >= 0; i -- ){
             if (S[i] == C) min_len = 0;
            ans[i] = min(ans[i], min_len ++ );
        }

        return ans;
    }
};
// @lc code=end

