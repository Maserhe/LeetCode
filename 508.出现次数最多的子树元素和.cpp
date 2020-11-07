/*
 * @lc app=leetcode.cn id=508 lang=cpp
 *
 * [508] 出现次数最多的子树元素和
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    unordered_map<int, int> freqInfo;
    int maxFreq = 0;
    
    int dfs(TreeNode * root) {
        if(root != NULL) {
            int sum = root->val + dfs(root->left) + dfs(root->right);
            freqInfo[sum]++;
            maxFreq = std::max(maxFreq, freqInfo[sum]);
            
            return sum;
        } else {
            return 0;
        }
    }
    
    vector<int> findFrequentTreeSum(TreeNode* root) {
        dfs(root);
        
        vector<int> res;
        for(auto & kv : freqInfo) {
            if(kv.second == maxFreq) {
                res.push_back(kv.first);
            }
        }
        
        return res;
    }
};
// @lc code=end

