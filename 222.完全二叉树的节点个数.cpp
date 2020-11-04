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

        // 层序遍历
        queue<TreeNode *> q;
        int next = 0;
        q.push(root);
        int count = 0;
        
        while(q.size()) { 
            TreeNode * t = q.front();
            q.pop();

            if (t->left) {
                q.push(t->left);
                next ++ ;
            }
            if (t->right) {
                q.push(t->right);
                next ++ ;
            }
            count ++ ;
        }
        return count;
    }
};
// @lc code=end

