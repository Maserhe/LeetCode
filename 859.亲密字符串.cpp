/*
 * @lc app=leetcode.cn id=859 lang=cpp
 *
 * [859] 亲密字符串
 */

// @lc code=start
class Solution {
public:
    bool buddyStrings(string A, string B) {
        int n = A.size();
        if (n != B.size()) return false;

        // 如果完全相同只要有一对重复串 就为真否则为假。
        char a = '1', b = a, c = '2', d = c;
        int num[26] = {0};
        bool flag = false;
        while (n -- )
        {   
            // 如果元素全部相同，
            num[A[n] - 'a'] ++ ;
            if (num[A[n] - 'a'] > 1) flag = true;
            if (A[n] != B[n]){
                if (a == '1') {
                    a = A[n];
                    b = B[n];
                } else if (c == '2'){
                    c = A[n];
                    d = B[n];
                } else return false;
            }
        }

        if (a == '1' && c == '2' && flag)  return true;
        if (a == d && b == c) return true;
        else return false;

    }
};
// @lc code=end

