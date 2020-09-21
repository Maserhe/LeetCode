/*
 * @lc app=leetcode.cn id=94 lang=cpp
 *
 * [94] 二叉树的中序遍历
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
    // 递归写法 ， 没意思。

    /*
    void recurrence(TreeNode * root, vector<int> & ans){
        if (!root) return;
        recurrence(root->left, ans);
        ans.push_back(root->val);
        recurrence(root->right, ans);

    }
    */

    vector<int> inorderTraversal(TreeNode* root) {
        
        if (!root) return {};
        vector<int> ans;
        // 使用 迭代 写法。
        stack<TreeNode * > st;
        TreeNode * tmp = root;
        while ( !st.empty() || tmp ){
            while (tmp){
                st.push(tmp);
                tmp = tmp->left;
            }

            TreeNode * t = st.top();
            st.pop();
            ans.push_back(t->val);
            tmp = t->right;

        }
        return ans;
    }
};
// @lc code=end

