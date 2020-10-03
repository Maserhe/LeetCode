/*
 * @lc app=leetcode.cn id=811 lang=cpp
 *
 * [811] 子域名访问计数
 */

// @lc code=start
class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {

        // 使用 哈希表
        vector<string> ans;

        unordered_map<string, int> cnt;

        for (string & word: cpdomains){
            int index = word.find(' ');
            int num = stoi(word.substr(0, index));
            string temp = 
            
            

        }

        return ans;
    }
};
// @lc code=end

