/*
 * @lc app=leetcode.cn id=543 lang=cpp
 *
 * [543] 二叉树的直径
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
    /* 第一次写的，不对，不一定非要 经过根节点。wrong answer 理解错误。
    int maxDeepth(TreeNode * root){
        if (!root) return 0;   
        return  1 + max(maxDeepth(root->left) , maxDeepth(root->right));
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        if (!root) return 0;
        return maxDeepth(root->left) + maxDeepth(root->right);
    }
    */
    int dfs(TreeNode * root, int & distance){
        if (root == nullptr) return 0;

        int left = dfs(root->left, distance);
        int right = dfs(root->right, distance);

        distance = max(left + right, distance);
        return max(left, right) + 1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int distance = 0;
        dfs(root, distance);
        return distance;
    }

};
// @lc code=end

