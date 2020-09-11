/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子序和
 */

// @lc code=start
#include<algorithm>

using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    
    // 扫描法 
    /*int current=nums[0];
    int sum=nums[0];
    //我们考虑如果全是负数，那么返回最大的负数，如果最后的和为正，那么就使用扫描法
    for(int i=1;i<nums.size();i++) {
        if(current<0)current=nums[i];//当前数小于0 肯定会舍去（否则将会影响接下来的和），换为下一个数
        else current+=nums[i];//如果当前数不小于0，那么他会对接下来的和有积极影响
        if(current>sum)sum=current;//这里既实现了负数返回最大也实现了扫描法
        //这里其实已经隐式的列举了所有可能，保留了所有可能的最大值
    }
    return sum;
    }
    */

        // 动态规划
        const int n = nums.size();
        int dp[n];
        dp[0] = nums[0];
        int res = nums[0];
        for (int i = 1; i < n; i ++ ) 
        {
            dp[i] = max(dp[i-1] + nums[i], nums[i]);
            res = max(res, dp[i]);
        }
        return res;
    }
};
// @lc code=end

