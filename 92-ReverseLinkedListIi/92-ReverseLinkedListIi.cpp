// Last updated: 8/18/2026, 11:54:33 AM
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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        ListNode* temp = new ListNode(0);
        temp->next = head;
        ListNode* curr = temp;

        for(int i=1; i<left; i++){
            curr = curr->next;
        }

        ListNode* start = curr->next;
        ListNode* curr1 = start;
        ListNode* prv = nullptr;

        for(int j=left; j<= right; j++){
            ListNode* nxtNode = curr1->next;
            curr1->next = prv;
            prv = curr1; 
            curr1 = nxtNode;
        }
        curr->next = prv;
        start->next = curr1;

        return temp->next;
    }
};