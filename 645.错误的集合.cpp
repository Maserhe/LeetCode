// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem645.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=645 lang=cpp
 *
 * [645] 错误的集合
 */

// @lc code=start
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        vector<int> ans;

        // 注意 题中，到底是 下标还是 数据
        
        for (int i = 0; i < nums.size(); i ++ ){
            int pos = abs(nums[i]) - 1;
            nums[pos] *= -1;
            if (nums[pos] > 0) {
                ans.push_back(pos + 1);
                nums[pos] *= -1;
            }
        }
        for (int i = 0; i < nums.size(); i ++ ) {
            if (nums[i] > 0 ) ans.push_back(i + 1);
        }
        
        return ans;
    }
};
// @lc code=end

