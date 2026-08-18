// Last updated: 8/18/2026, 11:54:12 AM
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        
        // ListNode* curr = headA;
        // int countA = 0;
        // int countB = 0;

        // while(curr != nullptr){
        //     countA++;
        //     curr = curr->next;
        // }

        // curr = headB;
        // while(curr != nullptr){
        //     countB++;
        //     curr = curr->next;
        // }

        // if(countA > countB){
        //     countA = countA-countB;
        //     int count=0;
        //     while(count < countA){
        //         headA = headA->next;
        //         count++;
        //     }
        // }
        // else{
        //     int count = 0;
        //     countB = countB - countA;
        //     while(count < countB){
        //         headB = headB->next;
        //         count++;
        //     }
        // }

        // while(headA != headB){
        //     headA = headA->next;
        //     headB = headB->next;
        // }
        // return headA;
        
        

        // Method-B
        ListNode* a = headA;
        ListNode* b = headB;

        while(a != b){
            a = (a==NULL?headB:a->next);
            b = (b==NULL?headA : b->next);
        }
        return a;
    }
};