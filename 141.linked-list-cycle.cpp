/*
 * @lc app=leetcode id=141 lang=cpp
 *
 * [141] Linked List Cycle
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
    bool hasCycle(ListNode *head) {
        ListNode *cur = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            cur = cur->next;
            fast = fast->next->next;
            if(cur==fast)
                return true;
        }
        return false;
    }
};
// @lc code=end

