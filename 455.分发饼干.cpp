/*
 * @lc app=leetcode.cn id=455 lang=cpp
 *
 * [455] 分发饼干
 */

// @lc code=start
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        
        //一般的贪心 , 将饼干重大到小排序
        sort(s.begin(), s.end());
        sort(g.begin(), g.end());

        int sum = 0;
        int n1 = g.size();
        int n2 = s.size();  

        int pos = 0;
        for (int i = 0; i < n1; i ++ ) {
            while (pos < n2)
            {
                if (s[pos] >= g[i]) {
                    sum ++ ;
                    pos ++ ;
                    break ;
                }
                else {
                    pos ++ ;
                }
            }
        }
        return sum;
    }
};
// @lc code=end

