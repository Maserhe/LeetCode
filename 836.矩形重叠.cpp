/*
 * @lc app=leetcode.cn id=836 lang=cpp
 *
 * [836] 矩形重叠
 */

// @lc code=start
class Solution {
public:
    
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {

        bool a = rec1[0] >= rec2[2]; 
        bool b = rec1[1] >= rec2[3];
        bool c = rec1[2] <= rec2[0];
        bool d = rec1[3] <= rec2[1];

        return !(a || b || c || d);
    }
};
// @lc code=end

