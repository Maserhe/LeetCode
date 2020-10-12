/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 */

// @lc code=start
class Solution {
public:
    // 方法一， 搜索。
    /*
    void dfs(vector<vector<int>>& ans, vector<int> tmp, int last, bool flag, int now, vector<int> nums, int index){
        
        
        
        
        if (now == 0) {
            if (tmp.size() == 3){
                ans.push_back(tmp);
                return;
            } 
        }

        if (index == nums.size()) return;

        // 开始搜索
        if (tmp.size() < 3 && now + nums[index] <= 0 ){
            if (flag || last != nums[index]){
                tmp.push_back(nums[index]);
                dfs(ans, tmp, nums[index], true, now + nums[index], nums, index + 1);
                tmp.pop_back(); 
            }
            dfs(ans, tmp, nums[index], false, now, nums, index + 1);
        } else return;
       
        
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;
        vector<int> tmp;
        dfs(ans, tmp, -1, true, 0, nums, 0);
        return ans;
    }
    */
    // 方法 二， 双指针。

    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        if(nums.size() < 2) return res;

        sort(nums.begin(), nums.end());

        int l = 0;
        int r = 0;
        int sum = 0;
        for(int i = 0; i < nums.size() - 2; i++)
        {
            if(nums[i] > 0) break;
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            l = i + 1;
            r = nums.size() - 1;
            while(l < r)
            {
                sum = nums[i] + nums[l] + nums[r];
                if(sum == 0)
                {
                    res.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    r--;
                    while(l < r && nums[l] == nums[l - 1]) l++;
                    while(l < r && nums[r] == nums[r + 1]) r--;
                }
                else if(sum < 0) l++;
                else  r--;
            }
            
        }
        return res;
    }
};
// @lc code=end

