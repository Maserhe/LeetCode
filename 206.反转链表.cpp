/*
 * @lc app=leetcode.cn id=206 lang=cpp
 *
 * [206] 反转链表
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
    ListNode* reverseList(ListNode* head) {
        
        // 方法一， 
        /*
        if (!head) return NULL;
        // 头插法， 先把链表头给删除，在不停头差。
        ListNode * tmp = head->next;
        head->next = NULL;
        while (tmp)
        {
            ListNode * res = tmp->next;
            tmp->next =head;
            head = tmp;
            tmp = res;
        }
        return head;
        */
       // 方法二, 前一个节点， 当前节点，后一个节点。
       if (!head) return NULL;
       ListNode * p0 = NULL;
       ListNode * p1 = head;
       ListNode * p2 = head->next;

        while (p1)
        {
            p1->next = p0;
            p0 = p1;
            p1 = p2;
            if (p2){
                p2 = p2->next;
            }
        }
        return p0;
    }
};
// @lc code=end

