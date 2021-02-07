/*
 * @lc app=leetcode.cn id=24 lang=cpp
 *
 * [24] 两两交换链表中的节点
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
    ListNode* swapPairs(ListNode* head) {
        
        if (!head) return NULL;
        ListNode * vHead = new ListNode(0);
        vHead->next = head;

        ListNode * now = head;
        ListNode * next = head->next;
        ListNode * pre = vHead;
        while (next) {
            ListNode * t = next->next;
            pre->next = next;
            next->next = now;
            now->next = t;
            // 从新分配
            pre = now;
            now = t;
            next = t? t->next:NULL;
        }
        return vHead->next;
    }
};
// @lc code=end

