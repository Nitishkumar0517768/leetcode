// Last updated: 8/4/2026, 2:55:50 PM
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
13    ListNode* deleteDuplicates(ListNode* head) {
14        ListNode* curr = head;
15
16        if(head == nullptr){
17            return head;
18        }
19
20        while(curr != nullptr && curr->next != nullptr){
21            if(curr->val == curr->next->val){
22                curr->next = curr->next->next;
23            }
24            else{
25                curr = curr->next;
26            }
27        }
28        return head;
29    }
30};