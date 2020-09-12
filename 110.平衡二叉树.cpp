/*
 * @lc app=leetcode.cn id=110 lang=cpp
 *
 * [110] 平衡二叉树
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

    // 肯定不是 最优解 ，这里重复 搜了很多。
    int maxDepth(TreeNode * root){
        if (root == NULL) return 0;
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if (root == NULL) return true;
        int a = maxDepth(root->left);
        int b = maxDepth(root->right);
       
        if ( abs(a-b) > 1) return false;
        if (!isBalanced(root->left)) return false;
        if (!isBalanced(root->right)) return false;
        return true;
    }
    
};
// @lc code=end

