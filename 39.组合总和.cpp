/*
 * @lc app=leetcode.cn id=39 lang=cpp
 *
 * [39] 组合总和
 */

// @lc code=start

int answer[500];
int cnt;

class Solution {
public:
    
    void dfs(int now, int target ,vector<int>& candidates,  vector<vector<int>>& res){
        if (now == target){
            vector<int> a;
            for (int i = 0; i < cnt; i ++ ) a.push_back(answer[i]);
            res.push_back(a);
            return;
        }
        if (now > target) return;
        for (int i = 0 ; i < candidates.size(); i ++ ){
            if (cnt == 0 || answer[cnt - 1 ] <= candidates[i]){
                //选择当前
                answer[cnt ++ ] = candidates[i];
                dfs(now + candidates[i], target, candidates, res);
                //恢复现场
                cnt -- ;
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>> res;
        dfs(0, target, candidates, res);
        return res;
    }
};
// @lc code=end

