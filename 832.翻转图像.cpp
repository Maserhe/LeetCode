/*
 * @lc app=leetcode.cn id=832 lang=cpp
 *
 * [832] 翻转图像
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        
        int n1 = A.size();
        int n2 = A[0].size();
        for (int i = 0; i < n1; i ++ ) {
            int l = 0, r = n2 -1;
            while (l < r)
            {
                
                int t = A[i][r];         // 将两个数 交换。
                A[i][r] = A[i][l] ? 0: 1;
                A[i][l] = t ? 0: 1;
                
                l ++  ;
                r --  ;
            }
            if (l == r) A[i][r] = A[i][r]? 0: 1;
        }
        return A;
    }
};
// @lc code=end

