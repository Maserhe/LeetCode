/*
 * @lc app=leetcode.cn id=19 lang=cpp
 *
 * [19] 删除链表的倒数第N个节点
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == NULL) return NULL;
        ListNode* slow=head;
        ListNode* quick=slow;

        ListNode* pre;
        for(int i = 0;i<n-1;i++) quick=quick->next;

        while(quick->next){
            pre=slow;
            quick=quick->next;
            slow=slow->next;
        }
        
        if(head == slow) return slow->next;
        pre->next = slow->next;
        return head;
    }
};
// @lc code=end

