/*
 * @lc app=leetcode.cn id=637 lang=cpp
 *
 * [637] 二叉树的层平均值
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
 
    vector<double> averageOfLevels(TreeNode* root) {

        if (!root) return {};
        vector<double> ans;
        // 层序 遍历
        queue<TreeNode *> q;
        q.push(root);

        while (q.size())
        {
            int n = q.size();
            double num = 0;
            double sum = 0;
            while (n -- )
            {
                TreeNode * t = q.front();
                q.pop();
                sum += t->val;
                num ++ ;
                if (t->left) q.push(t->left);
                if (t->right) q.push(t->right);
            }

            ans.push_back(sum / num);
        }
        return ans;
    }
};
// @lc code=end

