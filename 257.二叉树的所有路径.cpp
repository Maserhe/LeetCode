/*
 * @lc app=leetcode.cn id=257 lang=cpp
 *
 * [257] 二叉树的所有路径
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
    void dfs(vector<string> & ans, string s, TreeNode * root){
       if (root->left == NULL && root->right == NULL) {
           ans.push_back(s);
           return;
       }

       if (root->left) {
           dfs(ans, s + "->" + to_string(root->left->val), root->left);
       }

       if (root->right) {
           dfs(ans, s + "->" + to_string(root->right->val), root->right);
       }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        if (!root) return ans;
        string s;
        dfs(ans,s + to_string(root->val),root);
        return ans;
    }
};
// @lc code=end

