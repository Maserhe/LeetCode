/*
 * @lc app=leetcode.cn id=145 lang=cpp
 *
 * [145] 二叉树的后序遍历
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
    vector<int> postorderTraversal(TreeNode* root) {

        // 后序列 遍历。 左右根。  我们 先 根 右 左， 然后反转一下答案。
        // 因为 先进后出。 所以先 压入 左边 ， 在压入 右边。
         
        if(root == NULL) return {};
        stack<TreeNode*> s;
        vector<int> ans;
        s.push(root);
        while(!s.empty()){

            TreeNode* node = s.top();
            ans.push_back(node->val);
            s.pop();
            
            if(node->left) s.push(node->left);
            if(node->right) s.push(node->right);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
// @lc code=end

