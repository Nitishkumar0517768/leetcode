// Last updated: 8/18/2026, 11:54:45 AM
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = new ListNode(0);
        temp->next = head;
        ListNode* prev = temp;
        ListNode* curr = head;

        while(curr != nullptr && curr->next != nullptr){
            if(curr->val == curr->next->val){
                while(curr->next != nullptr && curr->val == curr->next->val){
                    curr = curr->next;
                }
                curr = curr->next;
                prev->next = curr;
            }
            else{
                prev = curr;
                curr = curr->next;
            }
        }
        return temp->next;
    }
};