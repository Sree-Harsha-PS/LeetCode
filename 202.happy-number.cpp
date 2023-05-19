/*
 * @lc app=leetcode id=202 lang=cpp
 *
 * [202] Happy Number
 */

// @lc code=start
class Solution {
public:
    bool isHappy(int n) {
    ListNode* removeElements(ListNode* head, int val) {
        if(!head)
            return head;

        while(head!=NULL && head->val==val)
            head=head->next;
        ListNode* cur = head;
        while(cur!=NULL && cur->next!=NULL){
            if(cur->next->val==cur->next->next->val)
                cur->next=cur->next->next;
            else
                cur = cur->next;
        }
        return head;
        
    } 
    }
};
// @lc code=end

