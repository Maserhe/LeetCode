/*
 * @lc app=leetcode.cn id=506 lang=cpp
 *
 * [506] 相对名次
 */

// @lc code=start
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        
        // 利用 map 会自动排序。从小到大。

        map<int, int> mp;
        int n = nums.size();
        vector<string> ans(n);

        for (int i = 0; i < n; i ++ ){
            mp[nums[i]] = i;
        }

        for (auto i = mp.begin(); i != mp.end(); i ++ ){
            if (n == 1)  ans[i->second] = "Gold Medal";
            else if (n == 2) ans[i->second] = "Silver Medal";
            else if (n == 3) ans[i->second] = "Bronze Medal";
            else ans[i->second] = to_string(n);
            n -- ;
        }
        return ans;
    }
};
// @lc code=end

