/*
 * @lc app=leetcode.cn id=852 lang=cpp
 *
 * [852] 山脉数组的峰顶索引
 */

// @lc code=start
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        for (int i = 0; i < arr.size() - 1; i ++ ){
            if (arr[i] > arr[i + 1]) return i;
        }
        return arr.size() - 1;
    }
};
// @lc code=end

