/*
 * @lc app=leetcode.cn id=236 lang=cpp
 *
 * [236] 二叉树的最近公共祖先
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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (p == root || q == root || !root)  return root;
        TreeNode * left = NULL;
        TreeNode * right = NULL;

        // 1. 如果左边和右边都能找到 当前点就是 祖先。
        // 2. 如果当前点的是root 返回。、
        // 3. 如果只有左边找到。

        left = lowestCommonAncestor(root->left, p, q);
        right = lowestCommonAncestor(root->right, p, q);

        
        if (!left && !right) return NULL;
        if (!left && right) return right;
        if (left && !right) return left;

        return root;
       

    }
};
// @lc code=end

