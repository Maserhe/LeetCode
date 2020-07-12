/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start

#include<string>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        if(x==0) return true;

        string str = to_string(x);

        for(int i = 0 ;i <str.size(); i ++ ){

            int u = str[i] - '0';

            if(u!= x%10) return false;

            x/=10;
        }

        return true;

        
        
        
    }
};
// @lc code=end

