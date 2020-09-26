/*
 * @lc app=leetcode.cn id=671 lang=cpp
 *
 * [671] 二叉树中第二小的节点
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
    int findSecondMinimumValue(TreeNode* root) {
        if(!root || !root->left || !root->right) return -1;//空节点或不满足题意
        
        int left = root->left->val, right = root->right->val;
        
        //若根节点和左节点值相同，则递归找左子树的第二小节点
        if(root->val == root->left->val) left = findSecondMinimumValue(root->left);
        //若根节点和右节点值相同，则递归找右子树的第二小节点
        if(root->val == root->right->val) right = findSecondMinimumValue(root->right);

        //若根节点等于左右子树的第二小节点返回-1
        if(root->val == left && root->val == right) return -1;

        //根据当前的根、左右节点的值继续判断
        int min_lr = min(left, right);      //左边或者 右边有一颗树没有找到。
        if(root->val < min_lr) return min_lr;//根节点小于最小值，返回最小值 
        else return max(left, right);//根节点等于最小值，返回最大值
    }
};
// @lc code=end

