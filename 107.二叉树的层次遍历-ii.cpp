/*
 * @lc app=leetcode.cn id=107 lang=cpp
 *
 * [107] 二叉树的层次遍历 II
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
#include<queue>

class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
        /*  失败 做法， 同一层，不同父亲，没有插入 同一个 vector 中
        vector<vector<int>> ans; // 答案
        if (!root) return ans;

        queue<TreeNode *> q;
        q.push(root);

        // 树头
        vector<int> t1;
        t1.push_back(root->val);
        ans.push_back(t1);

        while (q.size())
        {
            TreeNode * t = q.front();
            q.pop();

            vector<int> tmp;
            if(t->left) {
                tmp.push_back(t->left->val);
                q.push(t->left);
            }
            if(t->right) {
                tmp.push_back(t->right->val);
                q.push(t->right);
            }
            if(!tmp.empty()) ans.push_back(tmp); 
        }
        
        reverse(ans.begin(), ans.end());

        return ans;
        */

        vector<vector<int> > res;
        if (root == NULL) return res;

        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            vector<int> oneLevel;
            int size = q.size();
            for (int i = 0; i < size; i ++ ) { //在队列中的元素 肯定是 相同深度 的， 直接遍历 队列 就行了。
                TreeNode *node = q.front();
                q.pop();
                oneLevel.push_back(node->val);
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            res.insert(res.begin(), oneLevel);
        }
        return res;
    }
};
// @lc code=end

