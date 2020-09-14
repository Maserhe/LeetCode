/*
 * @lc app=leetcode.cn id=235 lang=cpp
 *
 * [235] 二叉搜索树的最近公共祖先
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
        
        //  直接返回root 的 三种情况
        // 1， 根节点为 左子树
        // 2， 根节点为 右子树
        // 3， 根节点为空
        if (root == NULL || root == p || root == q) return root;

        // 如果再叶子节点，分四种情况
        // 1， 在根节点的左边能找到 p 或 q 
        // 2,  在跟节点的右边能找到 p 或 q
        // 3,  在根节点的左右都能找到 p 或 q
        // 4， 在根节点的左右都不能找到 p 或 q

        TreeNode * left = lowestCommonAncestor(root->left, p, q);
        TreeNode * right = lowestCommonAncestor(root->right, p, q);

        if (!left && !right) return NULL;
        else if (!left && right) return right;
        else if (!right && left) return left;
        
        return root;

    }
};
// @lc code=end

