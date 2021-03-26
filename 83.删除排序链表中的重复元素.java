/*
 * @lc app=leetcode.cn id=83 lang=java
 *
 * [83] 删除排序链表中的重复元素
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
    public ListNode deleteDuplicates(ListNode head) {
        
        if (head == null) return null;
        // 虚拟头部
        ListNode vHead = new ListNode(0);
        vHead.next = head;

        ListNode last = head;
        ListNode temp = head.next;
        while (temp != null) {
            while (temp != null && temp.val == last.val) temp = temp.next;
            last.next = temp;
            last = temp;
            if (temp != null) temp = temp.next;
        }
        return vHead.next;

    }
}
// @lc code=end

