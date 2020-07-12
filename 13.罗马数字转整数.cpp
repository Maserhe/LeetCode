/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */

// @lc code=start
#include<string>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {

        int ret = 0;
        if (s.length() == 0){
            return 0;}
        int current = 0;
        int last = 0;
        for(int  i = s.length()-1; i>-1;i--){
            current = switcher(s[i]);
            if (current < last){
                ret -= current;
            }else {
                ret += current;
            }
            last = current;
        }
        return ret;
    }
    int switcher(char c) {
        switch (c) {
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
                default:
                    return 0;
        }
    }
    
};
// @lc code=end





        




