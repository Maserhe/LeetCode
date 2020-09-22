/*
 * @lc app=leetcode.cn id=538 lang=cpp
 *
 * [538] 把二叉搜索树转换为累加树
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

    // 中序遍历， 从小到大  排序。 左 中 右边。
    // 从大 到小 排序。 则是， 右 中 左 遍历

    TreeNode* convertBST(TreeNode* root) {

        if (!root) return NULL;

        stack<TreeNode *> st; // 栈模拟递归。
        TreeNode * tmp = root;
        int sum = 0;

        while ( !st.empty() || tmp)
        {
            while (tmp){
                st.push(tmp);
                tmp = tmp->right;
            }

            TreeNode * t = st.top();
            st.pop();
            
            sum += t->val;
            t->val = sum;

            tmp = t->left;
        }
        
        return root;
    }
};
// @lc code=end

