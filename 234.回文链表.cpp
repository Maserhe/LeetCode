/*
 * @lc app=leetcode.cn id=234 lang=cpp
 *
 * [234] 回文链表
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
    bool isPalindrome(ListNode* head) {
        // 方法一， 将链表元素 保存在 一个 容器中，然后进行访问。


        // 方法二， 链表反转。
        if (!head || !head->next) return true;
        // 使用 快慢双指针， 快速找到中间节点。
        ListNode * fast = head;
        ListNode * slow = head;
        //将前面一半进行链表反转。
        ListNode * rev = NULL;
        ListNode * cur = head;
        
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            // 链表反转
            cur->next = rev;
            rev = cur;
            cur = slow;
        }

        // 如果链表元素 为，奇数个。
        if (fast != NULL) {
            slow = slow->next;
        }

        while ( rev && slow){
            if (rev->val != slow->val) return false;
            rev = rev->next;
            slow = slow->next;
        }
        return true;
    }
};
// @lc code=end

