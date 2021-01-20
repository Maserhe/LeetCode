/*
 * @lc app=leetcode.cn id=23 lang=cpp
 *
 * [23] 合并K个升序链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
struct cmp{
    bool operator()(ListNode * a, ListNode * b) {return a->val > b->val;}
};
class Solution {
public:

    ListNode* mergeKLists(vector<ListNode*>& lists) {

        // 使用 优先队列
        priority_queue<ListNode *, vector<ListNode*>, cmp> q;
        // 把队头 全部进 栈。
        for(auto i: lists) if (i) q.push(i);

        ListNode * head = new ListNode(0);
        ListNode * temp = head;
        while (q.size()) {
            ListNode * t = q.top();
            q.pop();
            temp->next = t;
            temp = t;
            if (t->next) q.push(t->next);
        }
        
        return head->next;
    }
};
/* 方法二
class Solution {
public:

ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.empty()) {
            return nullptr;
        }
        
        return merge(lists, 0, lists.size() - 1);
    }

    ListNode* merge(vector<ListNode*>& lists, int left, int right) {
        if (left == right) {
            return lists[left];
        } else if (left + 1 == right) {
            return mergeTwoLists(lists[left], lists[right]);
        }

        int mid = left + (right - left) / 2;
        return mergeTwoLists(merge(lists, left, mid), merge(lists, mid + 1, right));
    }

    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        auto head = new ListNode(-1);
        auto tail = head;
        while (l1 || l2) {
            auto val1 = l1 ? l1->val : INT_MAX;
            auto val2 = l2 ? l2->val : INT_MAX;
            if (val1 < val2) {
                tail->next = l1;
                tail = tail->next;
                l1 = l1->next;
            } else {
                tail->next = l2;
                tail = tail->next;
                l2 = l2->next;
            }
        }

        auto dummy = head;
        head = head->next;
        delete dummy;

        return head;
    } 
};
*/
// @lc code=end

