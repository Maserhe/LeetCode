/*
 * @lc app=leetcode.cn id=748 lang=cpp
 *
 * [748] 最短补全词
 */

// @lc code=start
class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
   
        string ans;

        // 创建字母桶。
        vector<int> bucket(26, 0);
        int sum = 0;

        // 将需要测试的 匹配的字符放进来。记录每个字母的数量。
        for (char i: licensePlate){
           
            if (i >= 'a' && i <= 'z') {
                bucket[i - 'a'] ++ ;
                sum ++ ;
                continue;
            }
            if (i >= 'A' && i <= 'Z') {
                bucket[i - 'A'] ++ ;
                sum ++ ;
            }
        }
        
        int ma = 16; // 当前符合结果的最短单词数量。
        for (string i: words){
            if (i.size() > ma) continue;

            // 需要匹配的 字母桶
            vector<int> tmp;
            tmp.assign(bucket.begin(), bucket.end());

            int num = 0; // 记录已经匹配的数量。
            
            for (char t: i){
                if (tmp[t - 'a']) {
                    num ++ ;            // 能够匹配的字符数量。
                    tmp[t -'a'] -- ;
                }
            }
            if (sum == num && ma > i.size()) { // 说明一词不差 全部能匹配。
                ma = i.size();
                ans = i;
            }
            
        }
        
        return ans;
    }
};
// @lc code=end

