/*
 * @lc app=leetcode.cn id=98 lang=cpp
 *
 * [98] 验证二叉搜索树
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
    bool isValidBST(TreeNode* root) {
        if (!root) return true;
        stack<TreeNode *> st;
        TreeNode * tmp = root;
        long long last = LONG_MIN;
        while (st.size() || tmp){
            while (tmp)
            {
                st.push(tmp);
                tmp = tmp->left;
            }
            TreeNode * t = st.top();
            st.pop();
            if (t->val <= last) return false;
            last = t->val;
            if (t->right)  tmp = t->right;
        }
        return true;
    }
};
// @lc code=end

