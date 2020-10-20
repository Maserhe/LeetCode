/*
 * @lc app=leetcode.cn id=143 lang=cpp
 *
 * [143] 重排链表
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
    void reorderList(ListNode* head) {
        
        // 使用快慢 双指针 找到中间节点。并前面半段链表反转。
        // 如果长度是 奇数。那么第一个链先插入。
        if (!head) return;
        ListNode * fast = head->next;
        ListNode * slow = head->next;

        head->next = NULL;
        while (fast && fast->next)
        {
            fast = fast->next->next;
            
            // 将前面一半反转。
            ListNode * t = slow;
            slow = slow->next;
            t->next=head;
            head = t;
        }

        ListNode * ans = NULL;

        if (!fast){
            // 先插 前半段。
            ans = head;
            head = head->next;
            ans->next = NULL;
        }
        
        while (slow)
        {
            ListNode * t1 = slow->next;
            ListNode * t2 = head->next;

            slow->next = ans;
            ans = slow;
            cout << slow->val << " ";

            head->next = ans;
            ans = head;
            cout << head->val << " ";
            slow = t1;
            head = t2;

        }
        head = ans;
    }
};
// @lc code=end

