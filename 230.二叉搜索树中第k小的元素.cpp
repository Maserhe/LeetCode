/*
 * @lc app=leetcode.cn id=230 lang=cpp
 *
 * [230] 二叉搜索树中第K小的元素
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
    int kthSmallest(TreeNode* root, int k) {
        if (!root) return 0;
        // 中序遍历，刚好从小到大。
        stack<TreeNode *> st;
        vector<int> ans;
        TreeNode * tmp  = root;

        while (tmp || st.size())
        {
            while (tmp) {
                st.push(tmp);
                tmp = tmp->left;
            }
            TreeNode * t = st.top();
            st.pop();
            ans.push_back(t->val);
            tmp = t->right;
        }
        
        return ans[k - 1];
        
    }
};
// @lc code=end

