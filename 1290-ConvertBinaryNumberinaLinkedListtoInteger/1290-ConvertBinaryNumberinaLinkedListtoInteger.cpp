// Last updated: 8/11/2026, 3:56:22 PM
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
13    int getDecimalValue(ListNode* head) {
14        ListNode* curr = head;
15        int num = 0;
16
17        while(curr != nullptr){
18            num = num*2 + curr->val;
19            curr = curr->next;
20        }
21        return num;
22    }
23};