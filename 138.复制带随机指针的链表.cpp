/*
 * @lc app=leetcode.cn id=138 lang=cpp
 *
 * [138] 复制带随机指针的链表
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        if (!head) return NULL;
        unordered_map<Node *, Node *> map;
        Node  * temp = head;

        while  (temp) {
            map[temp] = new Node(temp->val);
            temp = temp->next;
        }
        temp = head;
        while (temp){
            if (temp->next) map[temp]->next = map[temp->next];
            if (temp->random) map[temp]->random = map[temp->random];
            temp = temp->next;
        }
        return map[head];
    }
};
// @lc code=end

