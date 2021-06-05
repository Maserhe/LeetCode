/*
 * @lc app=leetcode.cn id=203 lang=java
 *
 * [203] 移除链表元素
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public ListNode removeElements(ListNode head, int val) {

        if (head == null) return null;
        ListNode vHead = new ListNode(0);
        vHead.next = head;

        ListNode temp = vHead;
        while (temp != null) {
            ListNode t = temp.next;
            while (t != null && t.val == val) t = t.next;
            temp.next = t;
            temp=t;
        }

        return vHead.next;
    }
}
// @lc code=end

