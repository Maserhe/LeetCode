/*
 * @lc app=leetcode.cn id=129 lang=cpp
 *
 * [129] 求根到叶子节点数字之和
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
    int dfs(TreeNode * root, int pre){
        if (!root) return 0;
        pre = pre * 10 + root->val;
        if (!root->left && !root->right) return pre;
        else return dfs(root->left, pre) + dfs(root->right, pre);
    }
    int sumNumbers(TreeNode* root) {
        return dfs(root, 0);
    }
};
// @lc code=end

