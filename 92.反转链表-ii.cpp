/*
 * @lc app=leetcode.cn id=92 lang=cpp
 *
 * [92] 反转链表 II
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if (m == n) return head;
        ListNode * virtual_head = new ListNode(0);
        virtual_head->next = head;

        ListNode * temp = virtual_head;
        for (int i = 0; i < m  - 1; i ++ ) temp = temp->next;
        ListNode * pre = temp;

        temp = temp->next;
        // 反转链表的 头节点。
        ListNode * newHead = temp; 
        ListNode * end = temp;
        temp = temp->next;
        
        for (int i = m; i < n; i ++ ) {
            ListNode * t = temp->next;
            temp->next = newHead;
            newHead = temp;
            temp = t;
        }

        // 把链子插上。
        pre->next = newHead;
        end->next = temp;
        return virtual_head->next;
    }
};
// @lc code=end

