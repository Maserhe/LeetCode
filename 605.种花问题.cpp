/*
 * @lc app=leetcode.cn id=605 lang=cpp
 *
 * [605] 种花问题
 */

// @lc code=start
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {

        int num = 1; // 开头边界。
        for (int i = 0; i < flowerbed.size(); i ++ ){
            if (flowerbed[i]) {
                n -= ((num - 1)/ 2);
                num = 0;
            }
            else n
            num ++ ;
        }
        if (num) n -= (num/ 2); // 末尾边界
        
        if (n > 0) return false;
        else return true;
    }
};
// @lc code=end

