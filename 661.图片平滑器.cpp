/*
 * @lc app=leetcode.cn id=661 lang=cpp
 *
 * [661] 图片平滑器
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
        
        // 实在想不出什么好办法， 直接暴力解决吧。
        
        int n1 = M.size();
        int n2 = M[0].size();
        vector<vector<int>> ans(n1, M[0]);
        // 九种 行为。
        int x[3] = {-1, 0, 1};
        int y[3] = {-1, 0, 1};

        for (int i = 0; i < n1; i ++ ){
            for (int j = 0; j < n2; j ++ ){
                // 计算 周围 八个点。
                int sum = 0;
                int num = 0;
                for (int posx = 0; posx < 3; posx ++ ){
                    for (int posy = 0; posy < 3; posy ++ ){
                        int xx = i + x[posx];
                        int yy = j + y[posy];
                        if (xx < 0 || xx >= n1 || yy < 0 || yy >= n2) continue;
                        sum += M[xx][yy];
                        num ++ ;
                    }    
                }
                ans[i][j] = floor(sum / num);
            }
        }
        return ans;
    }
};
// @lc code=end

