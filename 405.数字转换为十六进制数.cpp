/*
 * @lc app=leetcode.cn id=405 lang=cpp
 *
 * [405] 数字转换为十六进制数
 */

// @lc code=start
class Solution {
public:
    string toHex(int num) {
        
        // 方法一， 但是不能求负数
        /*
        if (!num) return "0";
        // 转化位 16 进制。
        // 不停除以 16 
        string ans;
        while (num)
        {
            int t = num % 16;   
            num /= 16;
            if (t >= 10){
                t -= 10;
                char c = t + 97;
                ans = c + ans;
            }
            else ans = to_string(t) + ans;
        }
        return ans;
        */
        // 方法二， 可以求负数。用位运算。
        if(num==0)  return "0";
        string hex = "0123456789abcdef";
        int resSize=0;//右移动的次数
        string res="";
        while (num && resSize<8)//32位转换成16进制就是八位
        {
            res = hex[num & 0xf] + res;
            num >>= 4;
            resSize ++ ;
        }
        return res;
    }
};
// @lc code=end

