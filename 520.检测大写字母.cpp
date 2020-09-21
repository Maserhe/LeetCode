/*
 * @lc app=leetcode.cn id=520 lang=cpp
 *
 * [520] 检测大写字母
 */

// @lc code=start
class Solution {
public:
    bool detectCapitalUse(string word) {
        
        int flag = 1;
        // flag = 1 代表全是大写字母
        // flag = 0 全是小写
        // flag = -1 
        int n = word.size();

        if (word[0] <= 'z' && word[0] >= 'a') flag = 0;
        else {
            if (n > 1 && word[1] <= 'z' && word[1] >= 'a') flag = -1;
        }
        
        for (int i = 1; i < word.size(); i ++ ){
            if (flag <= 0){
                if (word[i] <= 'z' && word[i] >= 'a') continue;
                else return false;
            }
            else {
                if (word[i] <= 'Z' && word[i] >= 'A') continue;
                else return false;
            }
        }
    
        return true;
    }
};
// @lc code=end

