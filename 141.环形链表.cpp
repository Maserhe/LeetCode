/*
 * @lc app=leetcode.cn id=141 lang=cpp
 *
 * [141] 环形链表
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
    bool hasCycle(ListNode *head) {
        // 说明 一个节点 或者 为空
        if (head == NULL || head->next == NULL) return false;
        
        // 快满 双 指针
        ListNode * fast = head;
        ListNode * slow = head;
        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow) return true;
        }
        return false;
        
    }
};
// @lc code=end

