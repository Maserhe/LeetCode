/*
 * @lc app=leetcode.cn id=148 lang=cpp
 *
 * [148] 排序链表
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
    ListNode* sortList(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;
        return  mergeSort(head);
    }

     ListNode* mergeSort(ListNode *head) {
        if (head == NULL || head->next == NULL) return head;

        ListNode *fast = head->next;
        ListNode *slow = head;  
        while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
        }

        // Slow 是前半部分L1的最后一个结点, 它的next 一定要设置为nullptr
        ListNode *L2 = slow->next; // L2从slow的next 开始
        slow->next = NULL;

        head = mergeSort(head);
        L2 = mergeSort(L2);
        return mergeTwoList(head, L2);
     }

     ListNode* mergeTwoList(ListNode *L1, ListNode *L2) {
         ListNode *dummyHead = new ListNode;
         ListNode *tail = dummyHead;
         while (L1 != NULL && L2 != NULL) {
            if (L1->val <= L2->val) {
                tail->next = L1;
                L1 = L1->next;
                tail = tail->next;
            } else {
                tail->next = L2;
                L2 = L2->next;
                tail = tail->next;
            }
         }

        while (L1 != NULL) {
            tail->next = L1;
            L1 = L1->next;
            tail = tail->next;
        }

        while (L2 != NULL) {
            tail->next = L2;
            L2 = L2->next;
            tail = tail->next;
        }

        return dummyHead->next;
     }
};
// @lc code=end

