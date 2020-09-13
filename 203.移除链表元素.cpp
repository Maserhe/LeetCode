/*
 * @lc app=leetcode.cn id=203 lang=cpp
 *
 * [203] 移除链表元素
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
    ListNode* removeElements(ListNode* head, int val) {

        // 方法一， 分别删除头 相同元素，和 后面的 尾部元素，简单明了
        /*
        // 删除头部相投元素 这里是 while
        while (head != NULL && head->val == val) 
        {
            ListNode * tmp = head;
            head = head->next;
            delete tmp;
        }
        // 删除 后面的相同节点。
        ListNode * tmp = head;
        while (tmp != NULL && tmp->next != NULL)
        {
            if (tmp->next->val == val){
                ListNode * del = tmp->next;
                tmp->next = tmp->next->next;
                delete del;
            }
            else tmp = tmp->next;
        }
        return head;
        */ 

       // 方法二 ， 建立虚拟 原点。 让所操作都变得相同。不要忘记新建头节点并不是新建一个头指针。
       ListNode * tmp = new ListNode(0);
       tmp->next = head;
       ListNode * ans = tmp;
       while (ans->next != NULL)
       {
           if (ans->next->val == val){
               ListNode * del = ans->next;
               ans->next = ans->next->next;
               delete del;
           }
           else ans = ans->next;
       }
       
        return tmp->next;
    }
};
// @lc code=end

