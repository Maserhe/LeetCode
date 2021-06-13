import java.util.PriorityQueue;

/*
 * @lc app=leetcode.cn id=23 lang=java
 *
 * [23] 合并K个升序链表
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
    public ListNode mergeKLists(ListNode[] lists) {

        PriorityQueue<ListNode> queue = new PriorityQueue<>((v1, v2)->v1.val-v2.val);

        for (ListNode list: lists) {
            if (list != null ) queue.add(list);
        }

        ListNode ans = new ListNode(0);
        ListNode temp = ans;
        while (queue.size() > 0) {
            ListNode t = queue.poll();
            temp.next = t;
            temp = t;
            t = t.next;
            temp.next = null;
            if (t != null) queue.add(t);
        }

        return ans.next;

    }
}
// @lc code=end

