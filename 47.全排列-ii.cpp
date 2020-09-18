/*
 * @lc app=leetcode.cn id=47 lang=cpp
 *
 * [47] 全排列 II
 */

// @lc code=start
class Solution {
public:
    void dfs(vector<vector<int> > & ans, vector<int> &tmp, vector<int> & nums, bool * st){

        if (tmp.size() == nums.size()){
            ans.push_back(tmp);
            return;
        }
        for (int i = 0; i < nums.size() ; i ++ ){
            if (!st[i] ){
                if (i > 0 && !st[i - 1] && nums[i - 1] == nums[i]) continue;
                tmp.push_back(nums[i]);
                st[i] = true;
                dfs(ans, tmp, nums, st);
                // 恢复现场。
                tmp.pop_back();
                st[i] = false;
            }
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;
        vector<int>  tmp;
        int n = nums.size();
        bool st[n];
        memset(st, false, sizeof st);
        dfs(ans, tmp, nums, st);

        return ans;
    }
};
// @lc code=end

