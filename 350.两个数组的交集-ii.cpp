/*
 * @lc app=leetcode.cn id=350 lang=cpp
 *
 * [350] 两个数组的交集 II
 */

// @lc code=start
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int, int> map;

        for(int i : nums1) map[i] ++;

        vector<int> res;
        
        for(int i : nums2) {
            if(map.count(i)) {
                res.push_back(i);
                map[i] --;
            }
            if(map[i] == 0) map.erase(i);
        }
        return res;


    }
};
// @lc code=end

