/*
 * @lc app=leetcode.cn id=412 lang=cpp
 *
 * [412] Fizz Buzz
 */

// @lc code=start
class Solution {
public:
    vector<string> fizzBuzz(int n) {

        vector<string> ans;
        ans.resize(n);
        for (int i = 1; i <= n; i ++ ) {
            ans[i - 1] = to_string(i);
            if (i % 3 == 0) ans[i - 1] = "Fizz";
            if (i % 5 == 0){
                if (ans[i - 1] == "Fizz") ans[i - 1] += "Buzz";
                else ans[i - 1] = "Buzz";
            }
        }
        return ans;
    }
};
// @lc code=end

