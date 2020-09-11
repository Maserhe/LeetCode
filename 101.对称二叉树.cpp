/*
 * @lc app=leetcode.cn id=101 lang=cpp
 *
 * [101] 对称二叉树
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

    bool judge(TreeNode *p, TreeNode *q) {
        if (p == NULL && q == NULL) return true;
        if (p == NULL || q == NULL) return false;
        if (p->val != q->val) return false;
        return judge(p->left,q->right) && judge (p->right, q->left);
        
    }
    bool isSymmetric(TreeNode* root) {
        // 别忘了判断树 是否为空 ， 害我 浪费时间。 呜呜~
        if (!root) return true;
        return judge(root->left, root->right);
    }
};
// @lc code=end

