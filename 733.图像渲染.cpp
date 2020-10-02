/*
 * @lc app=leetcode.cn id=733 lang=cpp
 *
 * [733] 图像渲染
 */

// @lc code=start

typedef pair<int, int> PII;

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        // 这是一个洪水覆盖算法 floodFill 算法。
        // 直接使用一个队列就行了。 宽搜就行了。

        int oldColor = image[sr][sc];
        if (newColor == oldColor) return image;
        
        image[sr][sc] = newColor;  //赋予新颜色
        int ma_x = image.size();   // 行数
        int ma_y = image[0].size();// 列数

        queue<PII> q;
        q.push({sr, sc});
       
        // 记录上下左右四个方向。
        int dx[4] = {1, 0, -1, 0};
        int dy[4] = {0, 1, 0, -1};

        while (q.size())
        {
            PII t = q.front();
            q.pop();

            for (int i = 0; i < 4; i ++ ){  // 上下左右四个方向
                int a = t.first + dx[i];
                int b = t.second + dy[i];

                if (a < 0 || a >= ma_x || b < 0 || b >= ma_y ) continue;  // 超出边界。
                if (image[a][b] == oldColor) {
                    image[a][b] = newColor;
                    q.push({a, b});
                }
            }
        }
        return image;
    }
};
// @lc code=end

