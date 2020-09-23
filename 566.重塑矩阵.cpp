// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem566.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=566 lang=cpp
 *
 * [566] 重塑矩阵
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {

        int n1 = nums.size();
        int n2 = nums[0].size();

        if (n1 * n2 != r * c) return nums;

        vector<vector<int> > ans;
        for (int i = 0; i < n1 * n2;){
            vector<int> tmp;

            for (int j = 0; j < c; j ++ , i ++ ){
                tmp.push_back(nums[i / n2][i % n2]);
            }
            
            ans.push_back(tmp);
        }
        return ans;
    }
};
// @lc code=end

