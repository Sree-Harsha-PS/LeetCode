/*
 * @lc app=leetcode id=143 lang=cpp
 *
 * [143] Reorder List
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
    //inplace reversal
    ListNode* rev(ListNode* Mid){
        ListNode* prev = NULL;
        ListNode* cur = Mid;
        ListNode* nex;
        while(cur){
            nex = cur->next;
            cur->next = prev;
            prev = cur;
            cur = nex;
        }
        return prev;
    }
    
    void reorderList(ListNode* head) {
        int ct = 0;
        ListNode* temp = head;
        while(temp){
            ct++;
            temp = temp->next;
        }
        //gets nodes num

        ListNode* mid = head;
        int tempNo = ct/2;
        while(tempNo){
            tempNo--;
            mid = mid -> next;
        }
        ListNode* end = mid;
        ListNode* plis2 = rev(mid);
        ListNode* plis1 = head;
        while(end!=plis2){
            ListNode * tempNex = plis1->next;
            ListNode* tempNex2 = plis2->next;
            plis1->next = plis2;
            plis2->next = tempNex;
            plis2 = tempNex2;
            plis1 = tempNex;
        }
    }
};
// @lc code=end

