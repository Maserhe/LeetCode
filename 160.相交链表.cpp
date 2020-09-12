/*
 * @lc app=leetcode.cn id=160 lang=cpp
 *
 * [160] 相交链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (!headA || !headB) return NULL;
        ListNode * A = headA;
        ListNode * B = headB;

        // 最多 跑一编 A 和 B 的长度。让他们跑完去 跑跑另一个 链表。
        while (A != B) { 
            if (A) A = A->next;
            else A = headB;
            if (B) B = B->next;
            else B = headA;
        }
        
        return A;
    }
};
// @lc code=end

