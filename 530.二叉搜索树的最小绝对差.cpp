/*
 * @lc app=leetcode.cn id=530 lang=cpp
 *
 * [530] 二叉搜索树的最小绝对差
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


    // 二叉 搜索树， 我就直接中序遍历了。出了 使用模拟递归的 栈 不使用额外空间。

    int getMinimumDifference(TreeNode* root) {
        if (!root) return 0;
        int last = -1;

        stack<TreeNode *> st;
        int mi = __INT_MAX__;

        TreeNode * tmp = root;
        while (!st.empty() || tmp)
        {
            while (tmp)
            {
                st.push(tmp);
                tmp = tmp->left;
            }
            TreeNode * t = st.top();
            st.pop();
            if (last != -1 ) mi = min (mi, t->val - last );
            last = t->val;

            tmp = t->right;
        }
        return mi;
    }
};
// @lc code=end

