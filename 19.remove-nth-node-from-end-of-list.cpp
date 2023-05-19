/*
 * @lc app=leetcode id=19 lang=cpp
 *
 * [19] Remove Nth Node From End of List
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head || head->next==NULL)
            return NULL;

        ListNode* prev = NULL, *l2 = NULL;
        ListNode* cur = head;
        int x = 0;

        while(cur){
            prev = l2;
            l2 = (l2==NULL)?l2:l2->next;
            if(--n == 0)
                l2 = head;
            cur = cur->next;
        }
        if(!prev)
            return head->next;
            
        prev->next = l2->next;
        return head;
    }
};
// @lc code=end

