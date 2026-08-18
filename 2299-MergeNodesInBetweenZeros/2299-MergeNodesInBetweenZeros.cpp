// Last updated: 8/18/2026, 11:47:50 AM
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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head->next;
        ListNode* curr = head;
        int sum = 0;

        while(temp != nullptr){
            if(temp->val == 0){
                curr->next = temp;
                curr = curr->next;
                curr->val = sum;
                sum = 0;
                temp = temp->next;
            }
            else{
                sum += temp->val;
                temp = temp->next;
            }
        }
        curr->next = nullptr;

        return head->next;
    }
};