/*
 * @lc app=leetcode.cn id=222 lang=cpp
 *
 * [222] 完全二叉树的节点个数
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
    int countNodes(TreeNode* root) {
        if (!root) return 0;
        queue<TreeNode *> q;
        q.push(root);
        int ans = 0;
        while (q.size()) {
            TreeNode * t = q.front();
            q.pop();
            ans ++ ;
            if (t->left) q.push(t->left);
            if (t->right) q.push(t->right);
        }
        return ans;
    }
};
// @lc code=end

