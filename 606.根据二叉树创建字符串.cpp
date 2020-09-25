/*
 * @lc app=leetcode.cn id=606 lang=cpp
 *
 * [606] 根据二叉树创建字符串
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

    void bfs(TreeNode * root, string & s){
        if (!root) return;

        s += to_string(root->val);
        if (root->left){
            s += "(";
            bfs(root->left, s);
            s += ")";
            if (root->right){
                s += "(";
                bfs(root->right, s);
                s += ")";
            }
        }
        else{
            if (root->right){
                s += "()";
                s += "(";
                bfs(root->right, s);
                s += ")";
            }
        }
        
    }
    string tree2str(TreeNode* t) {

        if (!t) return "";
        string ans;
        bfs(t, ans);
        return ans;
    }
};
// @lc code=end

