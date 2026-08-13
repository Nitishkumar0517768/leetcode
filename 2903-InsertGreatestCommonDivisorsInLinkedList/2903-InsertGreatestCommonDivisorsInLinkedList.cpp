// Last updated: 8/13/2026, 10:38:21 AM
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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr = head;
        ListNode* nxt = curr->next;

        while(nxt != NULL){
            int n = gcd(curr->val, nxt->val);

            ListNode* newNode = new ListNode(n);

            curr->next = newNode;
            newNode->next = nxt;
            curr = nxt;
            nxt = curr->next;
        }        
        return head;
    }
};