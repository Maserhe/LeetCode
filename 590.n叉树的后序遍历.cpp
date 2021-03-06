/*
 * @lc app=leetcode.cn id=590 lang=cpp
 *
 * [590] N叉树的后序遍历
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
        val
        。。。 = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        if (!root) return {};
        stack<Node *> st;
        vector<int> ans;
        st.push(root);
        // 后序遍历， 左 右 中  反向遍历 ，中 右左，。
        // 如果 我们能反向输出结果， 左右中，
        while (st.size())
        {
            Node * t = st.top();
            st.pop();

            ans.push_back(t->val);

            int n = t->children.size();
            for (int i = 0; i < n; i ++ )
                st.push(t->children[i]);
            
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
// @lc code=end

