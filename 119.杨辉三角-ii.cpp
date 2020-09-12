/*
 * @lc app=leetcode.cn id=119 lang=cpp
 *
 * [119] 杨辉三角 II
 */

// @lc code=start
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        vector<int> ans;
        vector<int> last;
        ans.push_back(1);
        last.push_back(1);

        for (int i = 1; i <= rowIndex; i ++ ){
            ans.resize(i + 1);
            ans[0] = 1;
            ans[i] = 1;
            for (int j = 1; j < last.size(); j ++ ) {
                ans[j] = last[j - 1] + last[j];
            }
            last.resize(ans.size());
            last.assign(ans.begin(), ans.end());
        }
        return ans;
    }
};
// @lc code=end

