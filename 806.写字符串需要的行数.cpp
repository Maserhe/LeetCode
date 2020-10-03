/*
 * @lc app=leetcode.cn id=806 lang=cpp
 *
 * [806] 写字符串需要的行数
 */

// @lc code=start
class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        
     
        int sum = 0;
        int a = 1 , b = 0; // 行数 ，和 剩余数量
        for (char i: S){
            
            if (sum  + widths[i - 'a'] > 100){
                a ++ ;
                sum = widths[i - 'a'];
                b = widths[i - 'a'];
            } else{
                sum += widths[i - 'a'];
                b += widths[i - 'a'];
            }
        }
        return {a, b};
    }
};
// @lc code=end

