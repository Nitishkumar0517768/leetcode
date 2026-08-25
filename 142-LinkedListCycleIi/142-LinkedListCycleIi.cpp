// Last updated: 8/25/2026, 11:46:48 AM
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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        bool check = false;

        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast){
                check = true;
                break;
            }
        }

        if(check == true){
            ListNode* temp = head;
            
            while(temp != slow){
                temp = temp->next;
                slow = slow->next;
            }
            return temp;
        }

        return nullptr;
    }
};