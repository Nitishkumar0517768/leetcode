// Last updated: 8/16/2026, 5:22:58 PM
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
13    ListNode* reverseBetween(ListNode* head, int left, int right) {
14        
15        ListNode* temp = new ListNode(0);
16        temp->next = head;
17        ListNode* curr = temp;
18
19        for(int i=1; i<left; i++){
20            curr = curr->next;
21        }
22
23        ListNode* start = curr->next;
24        ListNode* curr1 = start;
25        ListNode* prv = nullptr;
26
27        for(int j=left; j<= right; j++){
28            ListNode* nxtNode = curr1->next;
29            curr1->next = prv;
30            prv = curr1; 
31            curr1 = nxtNode;
32        }
33        curr->next = prv;
34        start->next = curr1;
35
36        return temp->next;
37    }
38};