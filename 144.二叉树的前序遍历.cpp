/*
 * @lc app=leetcode.cn id=144 lang=cpp
 *
 * [144] 二叉树的前序遍历
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
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;

        if (!root) return ans;
        // 递归写法比较简单。使用迭代。

        stack<TreeNode *> st;
        st.push(root);

        while(st.size()){
            TreeNode * t = st.top();
            ans.push_back(t->val);
            st.pop();
            
            //因为 栈 是 先 进 后出。 则 先把 右边 节点先放进去。
            if (t->right) st.push(t->right);
            if (t->left) st.push(t->left);
        }
        return ans;
    }
};
// @lc code=end

