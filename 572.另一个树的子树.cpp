/*
 * @lc app=leetcode.cn id=572 lang=cpp
 *
 * [572] 另一个树的子树
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

    bool judge(TreeNode * s, TreeNode * t){
        if (!s && !t) return true;
        if (!s || !t) return false;

        if (s->val != t->val) return false;
        if (!judge(s->left, t->left)) return false;
        if (!judge(s->right, t->right)) return false;

        return true;
    }
    bool isSubtree(TreeNode* s, TreeNode* t) {
        //判断 t  是不是 s 的 子树。

        if (!s && !t) return true;
        if (!s || !t) return false;

        bool falg = false;
        stack<TreeNode *> st;
        st.push(s);

        while (st.size())
        {
            TreeNode * tmp = st.top();
            st.pop();
            if (judge(tmp, t)) return true;
            if (tmp->left) st.push(tmp->left);
            if (tmp->right) st.push(tmp->right);
           
        }
        
        return false;

    }
};
// @lc code=end

