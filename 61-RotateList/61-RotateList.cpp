// Last updated: 8/18/2026, 11:54:55 AM
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
    ListNode* rotateRight(ListNode* head, int k) {

        if(head == nullptr || head->next == nullptr || k == 0)
            return head;

        ListNode* curr = head;
        int size = 1;

        while(curr->next != nullptr){
            size++;
            curr = curr->next;
        }
        curr->next = head;
        
        k = k % size;
        
        int n = size - k;

        for(int i=0; i<n; i++){
            curr = curr->next;
        }
        ListNode* ans = curr->next;
        curr->next = nullptr;

        return ans;
    }
};