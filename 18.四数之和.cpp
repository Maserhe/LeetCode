/*
 * @lc app=leetcode.cn id=18 lang=cpp
 *
 * [18] 四数之和
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        int size = nums.size();

        if(size < 4){
            return res;
        }

        sort(nums.begin(), nums.end());
        
        vector<bool> used(size);
        vector<int> path;
        dfs(nums, target, used, 0, path, 0);
        return res;
    }

    //参数used表示当前元素是否已经使用过，depth表示当前遍历到的层数，path存储遍历过的元素，x表示上一层的起始点
    void dfs(vector<int>& nums, int target, vector<bool>& used, int depth, vector<int>& path, int x){
        if(target > (4 - depth) * nums[nums.size() - 1] || target < (4 - depth) * nums[0]) return; //剪枝1
        if(depth == 4){
            if(target == 0){
                res.push_back(path);
            }
            return;
        }
        for(int i = x; i < nums.size(); i++){
            if(i > x && nums[i] == nums[i-1]) continue; //去重
            if(target < 0 && nums[i] >= 0)  break;  //剪枝2
            if(!used[i]){
                path.push_back(nums[i]);
                used[i] = true;
                dfs(nums, target - nums[i], used, depth + 1, path, i + 1);
                used[i] = false;
                path.pop_back();
            }
        }
    }

};
// @lc code=end

