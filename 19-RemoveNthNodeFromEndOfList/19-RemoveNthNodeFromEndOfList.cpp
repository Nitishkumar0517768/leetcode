// Last updated: 8/18/2026, 11:55:26 AM
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == nullptr){
            return nullptr;
        }

        int count = 0;
        ListNode* curr = head;

        while(curr != nullptr){
            curr = curr->next;
            count++;
        }

        int m = count - n;
        count = 0;
        curr = head;

        if(m == 0){
            return curr->next;
        }

        while(curr != nullptr ){
            count++;

            if(count == m){
                curr->next = curr->next->next;
            }
            else{
                curr = curr->next;
            }
        }
        return head;

    }
};