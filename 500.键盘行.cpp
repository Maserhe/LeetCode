/*
 * @lc app=leetcode.cn id=500 lang=cpp
 *
 * [500] 键盘行
 */

// @lc code=start
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        set<char> st1 = {'q','w','e','r','t','y','u','i','o','p'};
        set<char> st2 = {'a','s','d','f','g','h','j','k','l'};
        set<char> st3 = {'z','x','c','v','b','n','m'};

        vector<string> ans;

        int n = words.size();
        for (int i = 0; i < n; i ++ ) {
            string t = words[i];
            int flag = true;
            if(st1.find(t[0]) != st1.end() || st1.find(t[0] + 32) != st1.end() ){
                int size = t.size();

                for (int j = 1; j < size; j ++ ){
                    if (st1.find(t[j]) != st1.end() || st1.find(t[j] + 32) != st1.end() ) continue;
                    else {
                        flag = false;
                        break;
                    }
                }
 
            }
            else if(st2.find(t[0]) != st2.end() || st2.find(t[0] + 32) != st2.end() ){
                int size = t.size();

                for (int j = 1; j < size; j ++ ){
                    if (st2.find(t[j]) != st2.end() || st2.find(t[j] + 32) != st2.end() ) continue;
                    else {
                        flag = false;
                        break;
                    }
                }
            }
            else {

                int size = t.size();

                for (int j = 1; j < size; j ++ ){
                    if (st3.find(t[j]) != st3.end() || st3.find(t[j] + 32) != st3.end() ) continue;
                    else {
                        flag = false;
                        break;
                    }
                }

            }
            if (flag) ans.push_back(t);
        }
        
        return ans;
    }
};
// @lc code=end

