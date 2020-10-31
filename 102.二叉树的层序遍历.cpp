/*
 * @lc app=leetcode.cn id=102 lang=cpp
 *
 * [102] 二叉树的层序遍历
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (!root) return {};
        vector<vector<int>> ans;

        int now = 1, next = 0;
        queue<TreeNode * > q;
        q.push(root);
        vector<int> tmp;

        while (q.size()) {
            TreeNode * t = q.front();
            q.pop();

            now -- ;
            tmp.push_back(t->val);

            if (t->left) {
                q.push(t->left);
                next ++ ;
            }

            if (t->right) {
                q.push(t->right);
                next ++ ;
            }
            
            if (now == 0) {
                now = next;
                next = 0;
                ans.push_back(tmp);
                tmp.clear();
            }
        }

        return ans;
    }
};
// @lc code=end

