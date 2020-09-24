/*
 * @lc app=leetcode.cn id=589 lang=cpp
 *
 * [589] N叉树的前序遍历
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
        if (!root) return {};
        stack<Node *> st;
        st.push(root);

        vector<int> ans;
        while(st.size()){

            Node * t = st.top();
            st.pop();

            ans.push_back(t->val);
            // 从后 往前 压栈。
            int n = t->children.size();
            for (int i = n-1; i >= 0; i -- ){
                st.push(t->children[i]);
            }
            
        }
        return ans;

    }
};
// @lc code=end

