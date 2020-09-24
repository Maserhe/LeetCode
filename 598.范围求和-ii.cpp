/*
 * @lc app=leetcode.cn id=598 lang=cpp
 *
 * [598] 范围求和 II
 */

// @lc code=start
class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        
        // 方法一， 暴力写法， 会超时。
        /*
        if (!ops.size()) return m * n;
        // 最大值 一定 是 0， 0
        vector<int> tmp(n, 0);
        vector<vector<int>> ans(m, tmp);

        for (int i = 0; i < ops.size(); i ++ ){
            
            for (int j = 0; j < ops[i][0]; j ++ ){
                for (int k = 0; k < ops[i][1]; k ++ ){
                    ans[j][k] ++ ;
                }
            }
            
        }
        
        int ma = ans[0][0];
        int sum = 0;
        for (int i = 0; i < m; i ++ ){
            for (int j = 0; j < n; j ++ ){
                if (ma == ans[i][j]) sum ++ ;
            }
        }
        
        return sum;
        */
       // 方法二， 直接找。最小的 值，
       int num = ops.size();
       if (!num) return n * m;
       int x = m, y = n;
       for (int i = 0; i < num; i ++ ){
           x = min(x, ops[i][0]);
           y = min(y, ops[i][1]);
           
       }

        return x * y;
    }
};
// @lc code=end

