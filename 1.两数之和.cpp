/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> a;
        int size = nums.size();
        for(int i = 0; i < size ; i ++ )
            for( int j = i + 1 ;j <size ; j ++ )
                if(nums[i] + nums[j] == target ){
                    a.push_back(i);
                    a.push_back(j);
                }
        return a;
    }
};
// @lc code=end

