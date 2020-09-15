/*
 * @lc app=leetcode.cn id=345 lang=cpp
 *
 * [345] 反转字符串中的元音字母
 */

// @lc code=start
class Solution {
public:
    
    string reverseVowels(string s) {

        // 使用 set 查找就是方便。
        set<char> vs = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

        int l = 0 , r = s.size() - 1;
        while (l < r)
        {
            if (vs.find(s[l]) == vs.end()) {
                l ++ ;
                continue;
            }
            if (vs.find(s[r]) == vs.end()) {
                r -- ;
                continue;
            }
            swap(s[l ++ ], s[r -- ]);
        }

        return s;
    }
};
// @lc code=end

