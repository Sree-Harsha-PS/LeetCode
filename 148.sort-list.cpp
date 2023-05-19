/*
 * @lc app=leetcode id=148 lang=cpp
 *
 * [148] Sort List
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
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next)
            return head;
        ListNode* cur = head;
        ListNode* nex = head->next;
        while(nex!=NULL){
            if(nex->val<cur->val){
                int swap = nex->val;
                nex->val = cur->val;
                cur->val = swap;
            }
            cur = cur->next;
            nex = nex->next;

        }
        return head;       
    }
};
// @lc code=end

