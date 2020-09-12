/*
 * @lc app=leetcode.cn id=111 lang=cpp
 *
 * [111] 二叉树的最小深度
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
    int minDepth(TreeNode* root) {
        if (root == NULL) return 0;
        int a = minDepth(root->left);
        int b = minDepth(root->right);
        // 如果 是 斜 树 之类的 
        if (a == 0 || b == 0) return max(a, b) + 1;
        return 1 + min(a, b);
    }
};
// @lc code=end

