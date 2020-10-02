/*
 * @lc app=leetcode.cn id=771 lang=cpp
 *
 * [771] 宝石与石头
 */

// @lc code=start
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        
        // 大写字母桶
        int bigCnt[26] = {0};
        // 小写字母桶
        int smallCnt[26] = {0};
        // 将自己的宝石全部用 字母桶 计数。
        for (char i: S){
            if (i >= 'a' && i <= 'z') smallCnt[i - 'a'] ++ ;
            else bigCnt[i - 'A'] ++ ;
        }
        // 将宝石与字母桶匹配。
        int ans = 0;
        for (char i: J){
            if (i >= 'a' && i <= 'z') ans += smallCnt[i - 'a'];
            else ans += bigCnt[i - 'A'];
        }
        return ans;
    }
};
// @lc code=end

