// Last updated: 9/17/2026, 10:30:54 AM
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
13    ListNode* oddEvenList(ListNode* head) {
14        
15        if(head == nullptr || head->next == nullptr){
16            return head;
17        }
18
19        ListNode* i = head;
20        ListNode* j = head->next;
21        ListNode* head2 = j;
22
23        while( j != nullptr && j->next != nullptr ){
24            i->next = j->next;
25            i = i->next;
26
27            j->next = i->next;
28            j = j->next;
29        }
30
31        i->next = head2;
32
33        if(j != nullptr){
34            j->next = nullptr;
35        }
36        return head;
37    }
38};