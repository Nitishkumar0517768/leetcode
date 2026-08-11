// Last updated: 8/11/2026, 3:39:08 PM
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
13    ListNode* mergeNodes(ListNode* head) {
14        ListNode* temp = head->next;
15        ListNode* curr = head;
16        int sum = 0;
17
18        while(temp != nullptr){
19            if(temp->val == 0){
20                curr->next = temp;
21                curr = curr->next;
22                curr->val = sum;
23                sum = 0;
24                temp = temp->next;
25            }
26            else{
27                sum += temp->val;
28                temp = temp->next;
29            }
30        }
31        curr->next = nullptr;
32
33        return head->next;
34    }
35};