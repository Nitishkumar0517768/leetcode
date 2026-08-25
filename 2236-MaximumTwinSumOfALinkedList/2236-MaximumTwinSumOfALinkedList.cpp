// Last updated: 8/25/2026, 11:43:18 AM
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
    int pairSum(ListNode* head) {
        ListNode* temp = nullptr;
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != nullptr && fast->next != nullptr){
            temp = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        temp->next = nullptr;

        ListNode* prv = nullptr;

        while(slow != nullptr){
            ListNode* nxtNode = slow->next;
            slow->next = prv;
            prv = slow;
            slow = nxtNode;
        }

        int maxS = 0;
        ListNode* curr1 = head;
        ListNode* curr2 = prv;

        while(curr1 != nullptr && curr2 != nullptr){
            int sum = curr1->val + curr2->val;
            maxS = max(maxS, sum);

            curr1 = curr1->next;
            curr2 = curr2->next;
        }
        return maxS;
    }
};