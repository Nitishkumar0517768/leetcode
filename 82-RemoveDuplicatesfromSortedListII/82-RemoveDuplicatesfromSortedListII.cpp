// Last updated: 10/1/2026, 1:45:51 PM
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
14        if(head == nullptr){
15            return head;
16        }
17
18        ListNode* i = head;
19        ListNode* j = head;
20        ListNode* dummy = new ListNode(0);
21        ListNode* temp = dummy;
22
23        while(j != nullptr){
24            if(i->val == j->val){
25                j = j->next;
26            }
27            else{
28                if(i->val == i->next->val){
29                    i = j;
30                    j = j->next;
31                }
32                else{
33                    dummy->next = i;
34                    i = i->next;
35                    j = j->next;
36                    dummy = dummy->next;
37                }
38            }
39        }
40
41        if(i->next == nullptr){
42            dummy->next = i;
43            dummy = dummy->next;
44        }
45        dummy->next = nullptr;
46        return temp->next;
47    }
48};