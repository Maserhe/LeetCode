/*
 * @lc app=leetcode.cn id=501 lang=cpp
 *
 * [501] 二叉搜索树中的众数
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
    // 方法一，使用map来计数。需要开辟额外数组，
    /*

    void dfs(TreeNode *root, map<int, int> &mmp) {
        if (root == NULL)return;
        mmp[root->val]++;
        dfs(root->left, mmp);
        dfs(root->right, mmp);
    }
    
    vector<int> findMode(TreeNode* root) {
        vector<int> v;
        map<int, int > mmp;
        dfs(root, mmp);
        int maxn = 0;
        for (auto it = mmp.begin(); it != mmp.end(); it++) {
            if (it->second == maxn) {
                v.push_back(it->first);
            }
            else if (it->second > maxn) {
                maxn = it->second;
                v.clear();
                v.push_back(it->first);
            }
        }
	return v;
    }
    */

   // 方法二， 中序遍历，
    vector<int> findMode(TreeNode* root) {
        
        if (!root) return {};
        vector<int> ans;
        // BST 的中序遍历 是 顺序排列的。

        stack<TreeNode *> st; 
        TreeNode * tmp = root;

        // ma 出现最多的 次数， last 上一次出现的值。 now 当前数已经出现过的次数。
        int ma = 0, last = -1, now = 0;

        // 迭代写法。 没有使用递归。手写栈模拟系统栈 ，实现递归程序。
        while (!st.empty() || tmp)
        {
            while (tmp)
            {
                st.push(tmp);
                tmp = tmp->left;
            }

            TreeNode * t = st.top();
            st.pop();

            if (last == t->val) now ++ ;
            else  now = 1;
            
            if (now > ma){
                ans.clear();
                ans.push_back(t->val);
                ma = now;
            }
            else if (now == ma){
                ans.push_back(t->val);
            }

            last = t->val;
            tmp = t->right;
        }

        return ans;
    }

};
// @lc code=end

