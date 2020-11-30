/*
 * @lc app=leetcode.cn id=338 lang=cpp
 *
 * [338] 比特位计数
 */

// @lc code=start
class Solution {
public:
    vector<int> countBits(int num) {

        if (!num) return {0};
        vector<int> ans(num + 1, 0);

        for (int i = 1; i <= num; i ++ ){
            int t = i;
            int count = 0;
            while (t){
                count ++ ;
                t = t - (t & -t);
            }
            ans[i] = count;
        }
        return ans;
    }
};
// @lc code=end

