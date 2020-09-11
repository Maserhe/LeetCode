/*
 * @lc app=leetcode.cn id=83 lang=cpp
 *
 * [83] 删除排序链表中的重复元素
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
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* tmp = head;
        
        while (tmp && tmp->next)
        {
            
            if (tmp->next->val == tmp->val) {
                ListNode * del = tmp->next; //删除结点。
                tmp->next = tmp->next->next;
                delete del;
                continue;
            }
            tmp = tmp->next;
        }

        return head;
    
       
    }
};
// @lc code=end

