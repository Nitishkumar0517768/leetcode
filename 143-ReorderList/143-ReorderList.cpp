// Last updated: 8/13/2026, 5:06:08 PM
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
13    void reorderList(ListNode* head) {
14        
15        if(head->next ==nullptr){
16            return;
17        }
18
19        ListNode* slow = head;
20        ListNode* fast = head;
21
22        while(fast->next != nullptr && fast->next->next != nullptr){
23            slow = slow->next;
24            fast = fast->next->next;
25        }
26
27        ListNode* list2 = slow->next;
28        slow->next = nullptr;
29
30        ListNode* rev = nullptr;
31
32        while(list2 != nullptr){
33            ListNode* nxtNode = list2->next;
34            list2->next = rev;
35            rev = list2;
36            list2 = nxtNode;
37        }
38
39        slow = head;
40
41        while(rev != nullptr){
42            ListNode* slNext = slow->next;
43            ListNode* revNext = rev->next;
44
45            slow->next = rev;
46            rev->next = slNext;
47
48            slow = slNext;
49            rev = revNext;
50        }
51
52    }
53};