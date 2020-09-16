/*
 * @lc app=leetcode.cn id=404 lang=cpp
 *
 * [404] 左叶子之和
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
    int sumOfLeftLeaves(TreeNode* root) {
        if (!root) return 0;
        // 手动写栈 ， 
        stack<TreeNode *> st;
        st.push(root);

        int sum = 0;
        while (st.size())
        {
            // 出栈
            TreeNode * t = st.top();
            st.pop();
            if (!t) continue;
            if (t->left){
                if (t->left->left == NULL && t->left->right == NULL) sum += t->left->val;
            }
            st.push(t->left);
            st.push(t->right);

        }
        return sum;
    }
};
// @lc code=end

