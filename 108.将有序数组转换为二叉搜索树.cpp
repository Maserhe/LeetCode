/*
 * @lc app=leetcode.cn id=108 lang=cpp
 *
 * [108] 将有序数组转换为二叉搜索树
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
    TreeNode * mas(int arr[], int m){
         
        if (m == 0) return NULL;
        int mid = m / 2;
        //新建左边 和 右边 子树
        TreeNode * root = new TreeNode(arr[mid]); 
        root->left = mas(arr, mid);
        root->right = mas(arr + mid + 1, m - mid - 1);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if (nums.size() == 0) return NULL;
        int * num = &nums[0]; //用 指针 
        return mas(num, nums.size());
    }
};
// @lc code=end

