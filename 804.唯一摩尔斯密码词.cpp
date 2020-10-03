/*
 * @lc app=leetcode.cn id=804 lang=cpp
 *
 * [804] 唯一摩尔斯密码词
 */

// @lc code=start
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string secret[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> st;
        int ans = 0;
        for (string i: words){
            string tmp;
            for (char j: i){
                tmp += secret[j - 'a'];
            }
            if (st.find(tmp) == st.end()) {
                ans ++ ;
                st.insert(tmp);
            }
        }
        
        return ans;
    }
};
// @lc code=end

