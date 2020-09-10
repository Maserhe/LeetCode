/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {

        ListNode * head = new ListNode(0);
        ListNode * p = head;

        while (l1 != NULL && l2 != NULL){

            if (l1->val <= l2->val) p->next = l1, l1 = l1->next;
            else  {
                p->next = l2;
                l2 = l2->next;
            }
            p = p->next;

        }

        // 把剩下的链给接上
        if (l1 != NULL) p->next = l1;
        if (l2 != NULL) p->next = l2;
        
        return head->next; // 返回不带头节点的 链表;
    }
};
// @lc code=end

