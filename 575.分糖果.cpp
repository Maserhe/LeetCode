/*
 * @lc app=leetcode.cn id=575 lang=cpp
 *
 * [575] 分糖果
 */

// @lc code=start
class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        sort(candies.begin(), candies.end());
        int sum = 0;
        int n = candies.size();
        for (int i = 0; i < n; i ++ ){
            if (i == 0 || candies[i] != candies[i - 1]) sum ++ ;
        }
        
        return min( n / 2, sum);
    }
};
// @lc code=end

