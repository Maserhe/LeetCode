/*
 * @lc app=leetcode.cn id=812 lang=cpp
 *
 * [812] 最大三角形面积
 */

// @lc code=start
class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {

        // 计算任意两个点 之间的距离。
        double mmax = 0;
        for (int i = 0; i < points.size(); i ++)
            for (int j = i + 1; j < points.size(); j ++)
                for (int k = j + 1; k < points.size(); k ++) 
                    mmax = max(mmax, 0.5 * abs(points[i][0] * points[j][1] + points[i][1] * points[k][0] + points[j][0] * points[k][1] - points[i][0] * points[k][1] - points[i][1] * points[j][0] - points[j][1] * points[k][0]));
        return mmax;
    }
};
// @lc code=end

