// Last updated: 8/18/2026, 11:46:48 AM
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
    ListNode* removeNodes(ListNode* head) {
        ListNode* prv = nullptr;
        ListNode* curr = head;

        while(curr != nullptr){
            ListNode* nxtNode = curr->next;
            curr->next = prv;
            prv = curr;
            curr = nxtNode;
        }
        ListNode* head1 = prv;

        while(prv != nullptr && prv->next != nullptr){
            if(prv->val > prv->next->val){
                prv->next = prv->next->next;
            }
            else{
                prv = prv->next;
            }
        }
        prv = nullptr;
        while(head1 != nullptr){
            ListNode* nxtNode = head1->next;
            head1->next = prv;
            prv = head1;
            head1 = nxtNode;
        }
        return prv;


    }
};