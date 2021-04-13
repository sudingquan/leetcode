/*
 * @lc app=leetcode.cn id=92 lang=cpp
 *
 * [92] 反转链表 II
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
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode ret, *p = &ret, *q;
        ret.next = head;
        int num = right - left;
        for (int i = 0; i < left - 1; i++) {
            p = p->next;
        }
        q = p->next;
        while (num--) {
            ListNode *remove = q->next;
            q->next = q->next->next;
            remove->next = p->next;
            p->next = remove;
        }
        return ret.next;
    }
};
// @lc code=end

