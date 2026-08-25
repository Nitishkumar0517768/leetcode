// Last updated: 8/25/2026, 11:46:03 AM
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
    ListNode* oddEvenList(ListNode* head) {

        if(head == nullptr || head->next == nullptr || head->next->next == nullptr){
            return head;
        }

        ListNode* curr = head;
        ListNode* temp = nullptr;
        ListNode* head1 = nullptr;

        while(curr->next != nullptr && curr->next->next != nullptr){
            
            if(head1 == nullptr){
                head1 = curr->next;
                temp = head1;

                curr->next = curr->next->next;
                curr = curr->next;
            }
            else{
                temp->next = curr->next;
                temp = temp->next;

                curr->next = curr->next->next;
                curr = curr->next;
            }
        }

        if(curr->next != nullptr){
            temp->next = curr->next;
            temp = temp->next;
            curr->next = nullptr;
        }

        temp->next = nullptr;
        curr->next = head1;

        return head;
    }
};