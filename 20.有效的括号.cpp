/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
#include<stack>

class Solution {
public:
    bool isValid(string s) {
        
        stack<char> parentheses;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') parentheses.push(s[i]);
            else {
                if (parentheses.empty()) return false;
                if (s[i] == ')' && parentheses.top() != '(') return false;
                if (s[i] == ']' && parentheses.top() != '[') return false;
                if (s[i] == '}' && parentheses.top() != '{') return false;
                parentheses.pop();
            }
        }
        return parentheses.empty();

    }
};
// @lc code=end

