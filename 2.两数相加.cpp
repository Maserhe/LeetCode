/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * p = new ListNode;
        ListNode * tail = p;
        int flag = 0;
        while (l1 || l2 )
        {
            int val1 = l1?l1->val:0;
            int val2 = l2?l2->val:0;
            //创建新节点
            ListNode  * n = new ListNode;
            n->val = (val1 + val2 + flag)%10;
            flag = (val1 + val2 + flag)/10;  //标志进位符

            //添加新节点
            tail->next = n;
            tail = n;
            
            //结点后移
            l1 = l1?l1->next:l1;
            l2 = l2?l2->next:l2;
        }
        //任然有进位
        if(flag == 1) tail->next = new ListNode(1);
        return p->next;
    }
};
// @lc code=end

