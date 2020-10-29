/*
 * @lc app=leetcode.cn id=1038 lang=cpp
 *
 * [1038] 把二叉搜索树转换为累加树
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
    TreeNode* bstToGst(TreeNode* root) {
        
        // 因为是二叉搜索树，中序遍历是从小到大。
        // 改变一下遍历规则让他从大到小。使用后缀和就行。
        if (!root) return 0;
        stack<TreeNode *> st;
        int num = 0;
        TreeNode * tmp = root;
        while (st.size() || tmp){
            while (tmp) {
                st.push(tmp);
                tmp = tmp->right;
            }
            TreeNode * t = st.top();
            st.pop();
            num += t->val;
            t->val = num;
            if (t->left) tmp = t->left;
        }
        return root;
    }
    
};
// @lc code=end

