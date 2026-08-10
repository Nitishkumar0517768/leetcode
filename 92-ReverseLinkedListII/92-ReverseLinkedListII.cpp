// Last updated: 8/10/2026, 5:10:27 PM
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
14        if(head == nullptr || left == right){
15            return head;
16        }
17
18        ListNode* temp = new ListNode(0);
19        temp->next = head;
20        ListNode* prev = temp;
21
22        for(int i=1; i<left; i++){
23            prev = prev->next;
24        }
25
26        ListNode* start = prev->next;
27        ListNode* curr = start;
28        ListNode* revPrv = nullptr;
29
30        for(int i=left; i<=right; i++){
31            ListNode* nextNode = curr->next;
32            curr->next = revPrv;
33            revPrv = curr;
34            curr = nextNode;
35        }
36
37        prev->next = revPrv;
38        start->next = curr;
39
40        return temp->next;
41
42    }
43};