/*
 * @lc app=leetcode.cn id=1046 lang=cpp
 *
 * [1046] 最后一块石头的重量
 */

// @lc code=start
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> que;
        for (int i = 0; i < stones.size(); i ++ ) que.push(stones[i]);

        while (que.size() > 1) {
            int a = que.top();
            que.pop();
            int b = que.top();
            que.pop();
            if (a > b) que.push(a - b);
        }
        return que.empty()? 0: que.top();
    }
};
// @lc code=end

