/*
 * @lc app=leetcode.cn id=328 lang=cpp
 *
 * [328] 奇偶链表
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
    ListNode* oddEvenList(ListNode* head) {
        
        if (!head) return NULL;
        ListNode * first = head;
        ListNode * second = head->next;
        ListNode * t = second;

        while (first && first->next && second && second->next) {
            ListNode * tmp1 = first->next->next;
            ListNode * tmp2 = second->next->next;
            first->next = tmp1;
            second->next = tmp2;

            first = tmp1;
            second = tmp2;
        }
        
        first->next = t;
        return head;
        
    }
};
// @lc code=end

