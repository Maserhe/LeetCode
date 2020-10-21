/*
 * @lc app=leetcode.cn id=925 lang=cpp
 *
 * [925] 长按键入
 */

// @lc code=start
class Solution {
public:
    bool isLongPressedName(string name, string typed) {

        int n1 = name.size();
        int n2 = typed.size();
        int pos = 0;
        for (int i = 0; i < n1; i ++ ){
            if (name[i] == typed[pos]){
                pos ++ ;
            } else return false;
            if (i < n1 - 1 && name[i] != name[i + 1]){
                while (pos < n2 && name[i] == typed[pos]) pos ++ ;
            }
        }
        for (int i = pos; i < n2; i ++ ) {
            if (typed[i] != name[n1 - 1]) return false;
        }
        return true;
    }
};
// @lc code=end

