// Last updated: 8/14/2026, 10:02:09 AM
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
13    ListNode* partition(ListNode* head, int x) {
14        if(head == nullptr || head->next == nullptr){
15            return head;
16        }
17
18        ListNode* curr = head;
19        ListNode* prv = nullptr;
20        ListNode* head1 = nullptr;
21        ListNode* temp = nullptr;
22        ListNode* head2 = nullptr;
23
24        while(curr != nullptr){
25            ListNode* nxt = curr->next;
26            curr->next = nullptr;
27            
28            if(curr->val < x){
29                if (head1 == nullptr) {
30                    head1 = curr;
31                    prv = head1;
32                }
33                else {
34                    prv->next = curr;
35                    prv = prv->next;
36                }
37            }
38            else{
39                if (head2 == nullptr) {
40                    head2 = curr;
41                    temp = head2;
42                }
43                else {
44                    temp->next = curr;
45                    temp = temp->next;
46                }
47            }
48            curr = nxt;
49        }
50        if(head1 == nullptr){
51            return head2;
52        }
53
54        prv->next = head2;
55
56        return head1;
57    }
58};