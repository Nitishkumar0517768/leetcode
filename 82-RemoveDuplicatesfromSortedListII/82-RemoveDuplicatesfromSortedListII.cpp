// Last updated: 8/10/2026, 3:42:00 PM
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
14        ListNode* temp = new ListNode(0);
15        temp->next = head;
16        ListNode* prev = temp;
17        ListNode* curr = head;
18
19        while(curr != nullptr && curr->next != nullptr){
20            if(curr->val == curr->next->val){
21                while(curr->next != nullptr && curr->val == curr->next->val){
22                    curr = curr->next;
23                }
24                curr = curr->next;
25                prev->next = curr;
26            }
27            else{
28                prev = curr;
29                curr = curr->next;
30            }
31        }
32        return temp->next;
33    }
34};