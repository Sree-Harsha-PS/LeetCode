/*
 * @lc app=leetcode id=142 lang=cpp
 *
 * [142] Linked List Cycle II
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
    ListNode *detectCycle(ListNode *head) {
        if(!head)
            return head;
        ListNode* pos = head;
        ListNode* fast = head;
        bool flagCycle = 0;
        while(fast!=NULL && fast->next!=NULL){
            pos = pos-> next;
            fast = fast->next->next;
            if(pos == fast){
                flagCycle = 1;
                break;
            }
        }
        if(!flagCycle)
            return NULL;
        pos = head;
        while(pos!=fast){
            pos = pos->next;
            fast = fast->next;
        }
        return fast;
    }
};

// @lc code=end

