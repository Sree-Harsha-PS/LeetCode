/*
 * @lc app=leetcode id=24 lang=cpp
 *
 * [24] Swap Nodes in Pairs
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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next)
            return head;
        ListNode* cur = head;
        ListNode* nex = head->next; 
        while(nex!= NULL){
            swap(cur->val,nex->val);
            if(!nex->next)
                break;
            else{
                cur = cur->next->next;
                nex = nex->next->next;
            }
        }
        return head;
    }
};
// @lc code=end

