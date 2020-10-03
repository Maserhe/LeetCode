/*
 * @lc app=leetcode.cn id=830 lang=cpp
 *
 * [830] 较大分组的位置
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>> ans;
        int last = 0;       //起始下标。
        int sum = 1;
        for (int i = 1; i < s.size(); i ++ ){
            if (s[i] == s[last]) sum ++ ;
            else {
                if (sum >= 3) {
                    vector<int> tmp;
                    tmp.push_back(last);
                    tmp.push_back(i - 1);
                    ans.push_back(tmp);
                }
                sum = 1;
                last = i;
            }
        }
        if (sum >= 3) {
            vector<int> tmp;
            tmp.push_back(last);
            tmp.push_back(s.size() - 1);
            ans.push_back(tmp);
        }
        return ans;
    }
};
// @lc code=end

