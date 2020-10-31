/*
 * @lc app=leetcode.cn id=99 lang=cpp
 *
 * [99] 恢复二叉搜索树
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
    void recoverTree(TreeNode* root) {
         if (!root) return;
        // 第一个逆序对的 前一个。
        // 第二个逆序对的 后一个。
        // 特殊情况，只有一个逆序对，两个直接交换。

        TreeNode * first = NULL;
        TreeNode * second = first;
        TreeNode * t_second = first;

        TreeNode * tmp = root;
        stack<TreeNode *> st;
        while (tmp) {
            st.push(tmp);
            tmp = tmp->left;
        }
        TreeNode * pre = st.top();
        st.pop();
        tmp = pre->right;

        while (st.size() || tmp){
            while (tmp) {
                st.push(tmp);
                tmp = tmp->left;
            }
            TreeNode * t = st.top();
            st.pop();
            if (pre->val > t->val){
                if (!first){    // 第一个逆序对。
                    first = pre;
                    t_second = t;   // 如果只有一个逆序对会用上。
                } else if (!second){
                    second = t;
                }
            }
            pre = t;
            tmp = t->right;
        }
        if (!second) second = t_second;
        int t = first->val;
        first->val = second->val;
        second->val = t;
    }
};
// @lc code=end

