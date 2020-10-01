/*
 * @lc app=leetcode.cn id=728 lang=cpp
 *
 * [728] 自除数
 */

// @lc code=start
class Solution {
public:
    bool judge(int n ){
        
        int temp = n;
        while (n)
        {
            int t = n % 10;
            if (!t) return false;
            n /= 10;
            if (temp % t != 0)  return false;
        }
        return true;

    }
    vector<int> selfDividingNumbers(int left, int right) {

        // 能被自己的 所构成的数 除尽。
        // 还是暴力解决吧。
        vector<int> ans;
        for (int i = left; i <= right; i ++ ) if (judge(i)) ans.push_back(i);
        return ans;
    }
};
// @lc code=end

