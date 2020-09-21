/*
 * @lc app=leetcode.cn id=521 lang=cpp
 *
 * [521] 最长特殊序列 Ⅰ
 */

// @lc code=start
class Solution {
public:
    int findLUSlength(string a, string b) {

        // 是自身的子序列，不是另一个序列的子序列。
        
        /*
        int n1 = a.size();
        int n2 = b.size();

        bool flag = flag;

        if (n1 <= n2){
            while (n1 && n2){
                if (a[n1 - 1] == b[n2 - 1]) n1 -- , n2 -- ;
                else n2 -- ;
            }
            if (n1) flag = true; // 不是字串。
        }
        else {
            while (n1 && n2){
                if (a[n1 - 1] == b[n2 - 1]) n2 -- , n1 -- ;
                else n1 -- ;
            }
            if (n2) flag = true; // 不是字串。
        }
        if (flag) return max(a.size(), b.size());
        else return -1;

        */
        if (a != b) return max(a.size(), b.size());
        else return -1;
    }
};
// @lc code=end

