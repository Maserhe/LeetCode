/*
 * @lc app=leetcode.cn id=61 lang=java
 *
 * [61] 旋转链表
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
    public ListNode rotateRight(ListNode head, int k) {
        if (head == null || head.next == null) return head;
        if (k == 0) return head;

        int count = 1;
        ListNode temp = head;
        while (temp.next != null) {
            count ++ ;
            temp = temp.next;
        }
        // temp 已经到达尾巴节点。
        temp.next = head;
        k %= count;
        for (int i = 0; i < count - k; i ++ ) {
            temp = temp.next;
        }
        ListNode ans = temp.next;
        temp.next = null;
        return ans;
    }
}
// @lc code=end

