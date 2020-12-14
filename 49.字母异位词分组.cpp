/*
 * @lc app=leetcode.cn id=49 lang=cpp
 *
 * [49] 字母异位词分组
 */

// @lc code=start
class Solution {
public:

    int hash(string s) {
        if (!s.size()) return 0;
        int ans = 0;
        for (char i: s) {
            ans = ans + 5*i*i*i/26 + i*1009 - i*i*997;  // 谁便写的，没有什么规律，尽量让哈希散列的范围较大就行了。避免不必要的碰撞。
        }
        return ans;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        if (!strs.size()) return {};
        vector<vector<string>> ans;
        int index = 0;
        unordered_map<int, int> map;    //  第一个存哈希值， 第二个存 下标
        
        for (int i = 0; i < strs.size(); i ++ ) {
            int t = hash(strs[i]);
            if (map.find(t) != map.end()) {
                ans[map[t]].push_back(strs[i]);
            } else {
                map[t] = index;
                index ++ ;
                vector<string> temp;
                temp.push_back(strs[i]);
                ans.push_back(temp);
            }
        }
        return ans;
    }
};
// @lc code=end

