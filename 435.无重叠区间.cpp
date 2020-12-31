/*
 * @lc app=leetcode.cn id=435 lang=cpp
 *
 * [435] 无重叠区间
 */

// @lc code=start
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
        // 贪心算法。
        if (intervals.size() < 2) return 0;
        // 按照首元素排序
        sort(intervals.begin(), intervals.end(), [](vector<int>& a, vector<int>& b){
            return a[0] < b[0];
        });
        int ans = 0;
        // 上个一的尾巴。
        int last = intervals[0][1];
        for (int i = 1; i < intervals.size(); i ++ ) {
            if (last > intervals[i][0]) {
                last = min(last, intervals[i][1]);
                ans ++ ;
            } else last = intervals[i][1];
        }
        return ans;
        
    }
};
// @lc code=end

