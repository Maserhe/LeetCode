/*
 * @lc app=leetcode.cn id=744 lang=cpp
 *
 * [744] 寻找比目标字母大的最小字母
 */

// @lc code=start
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        // 字母是循环出现的。
        // 如果是最后一个 则返回 第一个，
        // 如果大于或 者 等于最后一个 则返回 第一个。
        // 否则就返回 后一个 字母。
        for (int i = 0; i < letters.size() - 1; i ++ ){
            if (letters[i] > target) return letters[i];
        }
        if (target >= letters[letters.size() - 1]) return letters[0];
        else return letters[letters.size() - 1];
    }
};
// @lc code=end

