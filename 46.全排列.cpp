/*
 * @lc app=leetcode.cn id=46 lang=cpp
 *
 * [46] 全排列
 */

// @lc code=start
#include<cstring>

class Solution {
public:
    void dfs(vector<vector<int> > & ans, vector<int> &tmp, vector<int> & nums, bool * st){

        if (tmp.size() == nums.size()){
            ans.push_back(tmp);
            return;
        }

        for (int i = 0; i < nums.size() ; i ++ ){
            if (!st[i]){
                tmp.push_back(nums[i]);
                st[i] = true;
                dfs(ans, tmp, nums, st);
                // 恢复现场。
                tmp.pop_back();
                st[i] = false;
            }
        }

    }
    vector<vector<int>> permute(vector<int>& nums) {
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

