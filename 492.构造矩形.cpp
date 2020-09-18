/*
 * @lc app=leetcode.cn id=492 lang=cpp
 *
 * [492] 构造矩形
 */

// @lc code=start
class Solution {
public:
    vector<int> constructRectangle(int area) {

        double s = sqrt(area);
        if (s == floor(s)) return {(int)s, (int)s};

        int l = s;
        // 自动递减。 向下整除。
        while (l > 0)
        {
            if (area % l == 0 ) return {area/l, l};
            l -- ;
        }
         
       
        return {1,1};
    }
};
// @lc code=end

