/*
 * @lc app=leetcode.cn id=349 lang=cpp
 *
 * [349] 两个数组的交集
 */

// @lc code=start
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> rec;
        unordered_set<int> ans;

        for (int & n : nums1){
            rec.insert(n);
        }
        for (int & n : nums2){
            if (rec.find(n) != rec.end() && ans.find(n) == ans.end()){
                    ans.insert(n);
            }
        }
        
        vector<int> res(ans.begin(), ans.end());
        
        return res; 
    }
};
// @lc code=end

