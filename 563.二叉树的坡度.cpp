/*
 * @lc app=leetcode.cn id=563 lang=cpp
 *
 * [563] 二叉树的坡度
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
    int sum(TreeNode * root){
        if (!root) return 0;
        return root->val + sum(root->left) + sum(root->right);
    }
    int findTilt(TreeNode* root) {   
        // 分别 左右 子树 的 节点 之和。
        if (!root) return 0;
        return abs(sum(root->left) - sum(root->right)) + findTilt(root->left) + findTilt(root->right);
    }
};
// @lc code=end


