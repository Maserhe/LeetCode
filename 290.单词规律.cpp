/*
 * @lc app=leetcode.cn id=290 lang=cpp
 *
 * [290] 单词规律
 */

// @lc code=start
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int n1 =  pattern.size();
        int n2 = s.size();
        
        if (!n1 && !n2 ) return true;
        if (!n1 || !n2 ) return false;

        // 需要建立 双向映射
        unordered_map<string, char> sc;
        unordered_map<char, string> cs;

        int pos = 0; // 记录 字符串的 下标。
        for (int i = 0; i < n1; i ++ ){
            if (pos == n2 + 1) return false; //当 pattern 还有元素时， 但是s已经到末尾了。
            string tmp;
            //提取 字符串。
            while (pos < n2 && s[pos] != ' ')
            {
                tmp += s[pos ++ ];
            }
            pos ++ ; //跳过空格。
            
            cout << pos << endl;
            cout << n2 << endl;
            // 如果找到映射，但是不匹配。
            if (sc.find(tmp) != sc.end() && sc[tmp] != pattern[i]) return false;
            if (cs.find(pattern[i]) != cs.end() && cs[pattern[i]] != tmp ) return false;
            // 建立映射关系。
            sc[tmp] = pattern[i];
            cs[pattern[i]] = tmp;
        }

        if (pos < n2) return false; // s 下标还没有到末尾。
        return true;
    }
};
// @lc code=end

