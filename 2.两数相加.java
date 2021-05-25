/*
 * @lc app=leetcode.cn id=2 lang=java
 *
 * [2] 两数相加
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
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        if (l1 == null) return l2;
        if (l2 == null) return l1;

        ListNode ans = new ListNode(0);

        ListNode ansTemp = ans;
        ListNode temp1 = l1;
        ListNode temp2 = l2;
        int add = 0;
        while (temp1 != null || temp2 != null) {
            int a = temp1==null?0: temp1.val;
            int b = temp2==null?0: temp2.val;
            int sum = a + b + add;
            ListNode newNode = new ListNode(sum % 10);
            add = sum / 10;
            ansTemp.next = newNode;
            ansTemp = newNode;
            temp1 = temp1==null?null:temp1.next;
            temp2 = temp2==null?null:temp2.next;
        }
        if (add != 0) {
            ansTemp.next = new ListNode(1);
        }
        
        return ans.next;
    }
}
// @lc code=end

