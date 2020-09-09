/*
 * @lc app=leetcode.cn id=40 lang=cpp
 *
 * [40] 组合总和 II
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        vector<vector<int>> ans;
        vector<int> temp;
        sort(candidates.begin(),candidates.end());      //排序, 优化搜索顺序

        dfs(candidates, target, 0, temp, ans);
        return ans;
    }
    void dfs(vector<int> candidates, int target, int start, vector<int>temp, vector<vector<int>>&ans) {
        if (target < 0) return;
        if (target == 0) { //说明集合的目标和等于target
            ans.push_back(temp);
            return;
        }     
        for (int i = start; i < candidates.size(); i++) {
            if (i > start && candidates[i] == candidates[i - 1]) continue;

            temp.push_back(candidates[i]);

            dfs(candidates,target-candidates[i], i + 1, temp, ans);
            //恢复现场
            temp.pop_back();
        }
    }
};
// @lc code=end

