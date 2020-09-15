/*
 * @lc app=leetcode.cn id=383 lang=cpp
 *
 * [383] 赎金信
 */

// @lc code=start
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        int en[26] = {0};
        int n1 = magazine.size();
        for (int i = 0; i < n1; i ++ ) {
            en[magazine[i] - 97] ++ ;
        }
        int n2 = ransomNote.size();
        for (int i = 0; i < n2; i ++ ) {
            if (!en[ransomNote[i] - 97]) return false;
            en[ransomNote[i] - 97] -- ;
        }
        return true;
    }
};
// @lc code=end

