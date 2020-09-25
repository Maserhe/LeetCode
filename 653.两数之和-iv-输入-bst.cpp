/*
 * @lc app=leetcode.cn id=653 lang=cpp
 *
 * [653] 两数之和 IV - 输入 BST
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
    bool findTarget(TreeNode* root, int k) {
        
        // 使用 vector
        // 二分 查找另一半。
        if (!root) return false;
        stack<TreeNode *> st;
        vector<int> ans;

        TreeNode * tmp = root;
        while (st.size() || tmp)
        {
            while (tmp)
            {
                st.push(tmp);
                tmp = tmp->left;
            }
            
            TreeNode * t = st.top();
            st.pop();
            ans.push_back(t->val);
            tmp = t->right;
        }
        
        // 二分 查找答案。
        int n = ans.size();
        for (int i = 0; i < n; i ++ ){
            int l = i + 1, r = n ;
            while (l < r)
            {
                int mid = l + r >> 1;
                if (ans[mid] == k - ans[i]) return true;
                if (ans[mid] < k - ans[i]) l = mid + 1;
                else r = mid;
            }
        }
        
        return false;
    }
};
// @lc code=end

