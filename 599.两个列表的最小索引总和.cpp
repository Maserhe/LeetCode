/*
 * @lc app=leetcode.cn id=599 lang=cpp
 *
 * [599] 两个列表的最小索引总和
 */

// @lc code=start
class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int ma = 0x3f3f3f3f;
        vector<string> ans;
        for (int i = 0; i < list1.size(); i ++ ){
            for (int j = 0; j < list2.size(); j ++ ){
                if (i + j > ma) continue;
                else{
                    if (list1[i] == list2[j]) {
                        if (i + j == ma) ans.push_back(list1[i]);
                        else {
                            ma = i + j;
                            ans.clear();
                            ans.push_back(list1[i]);
                        }
                    }
                }
            }
        }
        return ans;
    }
};
// @lc code=end

