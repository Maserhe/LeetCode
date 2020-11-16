/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n = s.size();
        int ans = 0;
        vector<int> bucket(256, -1);
        int start = -1;
        for (int i = 0; i < n; i ++ ) {
            // 重复就更新开始处下标。
            if (bucket[s[i]] > start ) start = bucket[s[i]]; 
            bucket[s[i]] = i;
            ans = max (ans, bucket[s[i]] - start);
        }

        return ans;
    }
};
// @lc code=end

