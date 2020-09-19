/*
 * @lc app=leetcode.cn id=496 lang=cpp
 * 
 * [496] 下一个更大元素 I
 */

// @lc code=start
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int, int> aMap;
        stack<int> aStack;

        // 输出第一个比x大的数 
        for (auto num2 : nums2) {
            while (!aStack.empty() && num2 > aStack.top()) {
                aMap[aStack.top()] = num2;
                aStack.pop();
            }
            aStack.emplace(num2);
        }

        // 没有更大的数
        while (!aStack.empty()) {
            aMap[aStack.top()] = -1;
            aStack.pop();
        }

        vector<int> ans;
        for (auto num1 : nums1)
            ans.emplace_back(aMap[num1]);

        return ans;
    
    }
};
// @lc code=end

