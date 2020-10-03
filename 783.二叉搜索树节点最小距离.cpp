/*
 * @lc app=leetcode.cn id=783 lang=cpp
 *
 * [783] 二叉搜索树节点最小距离
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
    int minDiffInBST(TreeNode* root) {


        // 因为是二叉搜索树， 中序遍历。一边。
        // 记录遍历的上一个节点。
        stack<TreeNode *> st;
        TreeNode * tmp = root;
        int ans = 0x3f3f3f3f;
        TreeNode * last = NULL;

        while (st.size() || tmp)
        {
            while (tmp)
            {
                st.push(tmp);
                tmp = tmp-> left;
            }
            // 出栈。
            TreeNode * t = st.top();
            st.pop();
            if (last) ans = min(ans, abs(t->val - last->val));
            last = t;

            tmp = t->right;
        }

        return ans;
    }
};
// @lc code=end

