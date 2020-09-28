/*
 * @lc app=leetcode.cn id=700 lang=cpp
 *
 * [700] 二叉搜索树中的搜索
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
    TreeNode* searchBST(TreeNode* root, int val) {
        if (!root) return NULL;
        stack<TreeNode * > st;
        st.push(root);
        while (st.size())
        {
            TreeNode * t = st.top();
            st.pop();
            if (t->val == val) return t;
            else
            {
                if (t->left) st.push(t->left);
                if (t->right) st.push(t->right);
            }
            
        }
        return NULL;
    }
};
// @lc code=end

