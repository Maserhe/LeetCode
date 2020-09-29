/*
 * @lc app=leetcode.cn id=717 lang=cpp
 *
 * [717] 1比特与2比特字符
 */

// @lc code=start
class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        // 一共三种 字符 0 , 10, 11;
        // 我们假设最后一个是 1 bit 字符。
        // 如果是 1 的话，我就记录两个字符。
        // 如果是 0 的话，我就记录一个字符。
        int num = 0;
        for (int i = 0; i < bits.size() - 1; i ++ ){
            if (bits[i]) num += 2 , i ++ ;
            else num ++ ;
        }
        if (num != bits.size() - 1) return false;
        else return true;
        
    }
};
// @lc code=end

