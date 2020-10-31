/*
 * @lc app=leetcode.cn id=103 lang=cpp
 *
 * [103] 二叉树的锯齿形层次遍历
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
        vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        // 根层序遍历差不多。记录一下顺序就行了。
        // 记录一个bool状态，每层变换一次，改变一下入队规则就行了。
        if (!root) return {};
        vector<vector<int>> ans;
        stack<TreeNode *> st1;
        stack<TreeNode *> st2;
        st1.push(root);
        vector<int> tmp;

        while (st1.size() || st2.size()) {
            while (st1.size()) {
                TreeNode * t = st1.top();
                st1.pop();
                tmp.push_back(t->val);
                if (t->left) st2.push(t->left);
                if (t->right) st2.push(t->right);
            }
            if(tmp.size()) ans.push_back(tmp);
            tmp.clear();

            while (st2.size()) {
                TreeNode * t = st2.top();
                st2.pop();
                tmp.push_back(t->val);
                if (t->right) st1.push(t->right);
                if (t->left) st1.push(t->left);
            }
            
            if (tmp.size()) ans.push_back(tmp);
            tmp.clear();
        }
        return ans;
    }
};
// @lc code=end

