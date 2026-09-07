// Last updated: 9/7/2026, 3:17:49 PM
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
14        ListNode* rev = nullptr;
15        ListNode* curr = head;
16
17        while(curr != nullptr){
18            ListNode* nxt = curr->next;
19
20            curr->next = rev;
21            rev = curr;
22            curr = nxt;
23        }
24        return rev;
25    }
26};