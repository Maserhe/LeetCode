/*
 * @lc app=leetcode.cn id=19 lang=java
 *
 * [19] 删除链表的倒数第 N 个结点
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        if (head == null) return head;
        ListNode vHead = new ListNode(0);
        vHead.next = head;
        ListNode temp = vHead;
        while (n -- > 0 ) {
            temp = temp.next;
        }
        ListNode ans = vHead;

        while (temp.next != null) {
            temp = temp.next;
            vHead = vHead.next;
        }
        vHead.next = vHead.next.next;
        return ans.next;
    }
}
// @lc code=end

