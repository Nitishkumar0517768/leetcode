// Last updated: 10/1/2026, 11:34:32 AM
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
13    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
14        if(list1 == nullptr){
15            return list2;
16        }
17        if(list2 == nullptr){
18            return list1;
19        }
20
21        ListNode* i = list1;
22        ListNode* j = list2;
23        ListNode* head = nullptr;
24        ListNode* temp = nullptr;
25
26        if(i->val < j->val){
27            head = i;
28            i = i->next;
29        }
30        else{
31            head = j;
32            j = j->next;
33        }
34        temp = head;
35
36        while(i && j){
37            if(i->val < j->val){
38                temp->next = i;
39                temp = temp->next;
40                i = i->next;
41            }
42            else if(i->val >= j->val){
43                temp->next = j;
44                temp = temp->next;
45                j = j->next;
46            }
47        }
48
49        if(i != nullptr){
50            temp->next = i;
51        }
52        else{
53            temp->next = j;
54        }
55        return head;
56    }
57};