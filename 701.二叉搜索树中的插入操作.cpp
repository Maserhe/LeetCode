/*
 * @lc app=leetcode.cn id=701 lang=cpp
 *
 * [701] 二叉搜索树中的插入操作
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        
        TreeNode * ne = new TreeNode(val);
        if (!root) return ne;

        // 二叉搜索树，
        TreeNode * tmp = root;
        TreeNode * last = NULL;
        while (tmp)
        {
            last = tmp;
            if (tmp->val > val) {
                tmp = tmp->left;
            } else tmp = tmp->right;
        }

        if (last->val > val ) last->left = ne;
        else last->right = ne;
        return root;
    }
};
// @lc code=end

