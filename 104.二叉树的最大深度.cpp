/*
 * @lc app=leetcode.cn id=104 lang=cpp
 *
 * [104] 二叉树的最大深度
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
int sum = 0;
class Solution {
public:

    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        // 递归 简洁
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};
// @lc code=end

