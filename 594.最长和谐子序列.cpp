/*
 * @lc app=leetcode.cn id=594 lang=cpp
 *
 * [594] 最长和谐子序列
 */

// @lc code=start
class Solution {
public:
    int findLHS(vector<int>& nums) {

        // 对于每个数，我们记录 当前数 前面，小于 或者等于 它的 个数。

        unordered_map<int, int> map;

        
        for (int i: nums) map[i] ++ ;

        int ans = 0;
        for (int i:nums){
            if (map[i -  1] != 0) ans = max(ans, map[i - 1] + map[i]);
        }
        
        return ans;
    }
};
// @lc code=end

