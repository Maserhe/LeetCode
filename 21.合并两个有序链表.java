import java.util.PriorityQueue;

/*
 * @lc app=leetcode.cn id=21 lang=java
 *
 * [21] 合并两个有序链表
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
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {

       if (l1 == null) return l2;
       if (l2 == null) return l1;

       ListNode ans = new ListNode(0);
       ListNode temp = ans;

       while (l1 != null && l2 != null) {
            if (l1.val > l2.val) {
                temp.next = l2;
                l2 = l2.next;
            } else {
                temp.next = l1;
                l1 = l1.next;
            }
            temp = temp.next;
       }
       if (l1 != null) temp.next = l1;
       if (l2 != null) temp.next = l2;

        return ans.next;

    }
}
// @lc code=end

