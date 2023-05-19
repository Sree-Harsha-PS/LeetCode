/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
 */



// @lc code=start
/**
 * 
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 * class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1)
            return list2;
        if(!list2)
            return list1;
        ListNode* pCur = list1, *sCur = list2;
        while(pCur->next!=NULL && sCur->next!=NULL){
            
            if(pCur->val>=sCur->val){
                ListNode *newN = new ListNode(sCur->val),*temp;
                //pCur->val = sCur->val;
                temp = pCur->next; 
                newN->next = temp;
                pCur->next = newN;
            }

            //traverse
            pCur = pCur->next;
            sCur = sCur->next;
        }
        if(!pCur->next && sCur->next!=NULL){
            while(sCur!=NULL){
                pCur->next = sCur;
                pCur = pCur->next;
            }
        }
        return list1;
            ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1)
            return list2;
        if(!list2)
            return list1;
        ListNode* pCur = list1, *sCur = list2;
        while(pCur!=NULL || sCur!=NULL){
            ListNode *newN = new ListNode();
            int x = 0;
            if(pCur->val>sCur->val){
                x = pCur->val;
            }
            else{
                x = sCur->val;
            }
            pCur->val = sCur->val;
            newN->next =pCur -> next;
            pCur->next = newN;

            //traverse
            pCur = pCur->next;
            sCur = sCur->next;
        }
        return list1;
    }
    }
};
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1)
            return list2;
        else if(!list2)
            return list1;
        if(list1->val>list2->val)
            swap(list1,list2);
        ListNode* temp = NULL, *res = list1;
        while(list1 && list2){
            if(list1->val<=list2->val){
                temp = list1;
                list1=list1->next;
            }
            else{
                temp->next = list2;
                swap(list1,list2);
            }
        }
        while(list1){
            temp->next = list1;
            temp=list1;
            list2=list2->next;
        }
        while(list2){
            temp->next = list2;
            temp = list2;
            list2 = list2->next;
        }
        return res;

    }
/*        if(!list1)
            return list2;
        if(!list2)
            return list1;
        ListNode* pCur = list1, *sCur = list2;
        while(pCur->next!=NULL && sCur->next!=NULL){
            
            if(pCur->next->val>=sCur->next->val){
                ListNode *newN = new ListNode(sCur->next->val),*temp;
                //pCur->val = sCur->val;
                temp = pCur->next; 
                newN->next = temp;
                pCur->next = newN;
            }

            //traverse
            sCur = sCur->next;
            pCur = pCur->next;
            
        }
        if(!pCur->next && sCur->next!=NULL){
            while(sCur!=NULL){
                pCur->next = sCur;
                pCur = pCur->next;
            }
        }
        return list1;*/
};
// @lc code=end

