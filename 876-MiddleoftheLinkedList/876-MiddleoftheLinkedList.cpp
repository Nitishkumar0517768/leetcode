// Last updated: 9/7/2026, 11:38:22 AM
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
13    ListNode* middleNode(ListNode* head) {
14        ListNode* slow = head;
15        ListNode* fast = head;
16
17        while(fast && fast->next){
18            slow = slow->next;
19            fast = fast->next->next;
20        }
21        return slow;
22    }
23};