/*
 * @lc app=leetcode.cn id=95 lang=cpp
 *
 * [95] 不同的二叉搜索树 II
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
 vector<TreeNode*> dfs(int left, int right)
    {
        if(left > right) return {NULL};
        vector<TreeNode*> ans;

        // 将现在区间进行划分为两部分。
        for (int i = left; i <= right; i ++ ){
            auto l = dfs(left, i - 1);
            auto r = dfs(i + 1, right);

            // 枚举 左右子树。
            for (TreeNode * m: l){
                for (TreeNode *n: r){
                    // 当前节点。
                    TreeNode * root = new TreeNode(i);
                    root->left = m;
                    root->right = n;
                    ans.emplace_back(root);
                }
            }
        }
        return ans;
    }

    vector<TreeNode*> generateTrees(int n) {
        if(!n) return {};
        return dfs(1, n);
    }
};
// @lc code=end

