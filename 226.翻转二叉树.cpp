/*
 * @lc app=leetcode.cn id=226 lang=cpp
 *
 * [226] 翻转二叉树
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
    TreeNode* invertTree(TreeNode* root) {
        if (!root) return NULL;

        // 递归写比较好。
        TreeNode * tmp;
        // 如果 左右 子树有一个存在的话。
        if (root->left || root->right) {
            tmp = root->left;
            
            root->left = invertTree(root->right);
            root->right = invertTree(tmp);
        }
        return root;
    }
};
// @lc code=end

