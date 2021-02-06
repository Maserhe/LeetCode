/*
 * @lc app=leetcode.cn id=17 lang=cpp
 *
 * [17] 电话号码的字母组合
 */

// @lc code=start
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (!digits.size()) return {};
        map<int,string> mp;
        mp[1] = "";
        mp[2] = "abc";
        mp[3] = "def";
        mp[4] = "ghi";
        mp[5] = "jkl";
        mp[6] = "mno";
        mp[7] = "pqrs";
        mp[8] = "tuv";
        mp[9] = "wxyz";
        
        vector<string> ans;
        vector<string> temp;
        ans.push_back("");
        for (int i = 0; i < digits.size(); i ++ ) {
            int n = ans.size();
            temp.clear();
            for (int tt = 0; tt < n; tt ++ ) temp.push_back(ans[tt]);
            ans.clear();
            string t = mp[digits[i] - '0'];
            for (int j = 0; j < t.size(); j ++ ) {
                char c = t[j];
                for (int z = 0; z < n; z ++ ) {
                    ans.push_back(temp[z] + c);
                }
            }
        }
        return ans;
    }
};
// @lc code=end

