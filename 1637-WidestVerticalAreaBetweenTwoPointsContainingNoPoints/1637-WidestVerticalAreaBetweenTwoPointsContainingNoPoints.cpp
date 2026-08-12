// Last updated: 8/12/2026, 4:01:02 PM
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
13    ListNode* removeNodes(ListNode* head) {
14        ListNode* prv = nullptr;
15        ListNode* curr = head;
16
17        while(curr != nullptr){
18            ListNode* nxtNode = curr->next;
19            curr->next = prv;
20            prv = curr;
21            curr = nxtNode;
22        }
23        ListNode* head1 = prv;
24
25        while(prv != nullptr && prv->next != nullptr){
26            if(prv->val > prv->next->val){
27                prv->next = prv->next->next;
28            }
29            else{
30                prv = prv->next;
31            }
32        }
33        prv = nullptr;
34        while(head1 != nullptr){
35            ListNode* nxtNode = head1->next;
36            head1->next = prv;
37            prv = head1;
38            head1 = nxtNode;
39        }
40        return prv;
41
42
43    }
44};