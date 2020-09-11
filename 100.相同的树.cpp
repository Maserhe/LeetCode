/*
 * @lc app=leetcode.cn id=100 lang=cpp
 *
 * [100] 相同的树
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
    bool isSameTree(TreeNode* p, TreeNode* q) {

        // 还是递归 写着方便， 多判断判断就行了。
        // 当 两个子树都不是空的时候
        if (p != NULL && q != NULL ){
            if (p->val != q->val) return false;
            if (!isSameTree(p->left, q->left)) return false;
            if (!isSameTree(p->right, q->right)) return false;
            return true;
        }
        // 当两个 子树 都是空 时
        else if (p == NULL && q == NULL) return true;
        // 一个空， 一个不空  显然不相等。
        return false;
    }
};
// @lc code=end

