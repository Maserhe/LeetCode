/*
 * @lc app=leetcode.cn id=463 lang=cpp
 *
 * [463] 岛屿的周长
 */

// @lc code=start
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {

        // 1 代表陆地。 0 代表水域。
        int x = grid.size();
        int y = grid[0].size();
        int sum = 0;
        for (int i = 0; i < x; i ++ ){
            for (int j = 0; j < y; j ++ ){
                if (grid[i][j]) {
                    sum += 4;
                    if (i >= 1 && grid[i - 1][j]) sum -= 2;
                    if (j >= 1 && grid[i][j -1]) sum -= 2;
                }
            }
        }
        return sum;
    }
};
// @lc code=end

