// Last updated: 8/11/2026, 10:34:55 PM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* reverseList(ListNode* head) {
14        ListNode* prv = nullptr;
15        ListNode* curr = head;
16
17        while(curr != nullptr){
18            ListNode* nxtNode = curr->next;
19            curr->next = prv;
20            prv = curr;
21            curr = nxtNode;
22        }
23        return prv;
24    }
25};