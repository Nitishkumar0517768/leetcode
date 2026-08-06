// Last updated: 8/6/2026, 5:36:55 PM
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
13    ListNode* swapPairs(ListNode* head) {
14        if(head==nullptr || head->next==nullptr) return head;
15
16        ListNode* dummy = new ListNode(0);
17        dummy->next=head;   
18        ListNode* prev = dummy;
19
20        while(prev->next!=nullptr && prev->next->next!=nullptr){
21            ListNode* first = prev->next;
22            ListNode* second = prev->next->next;
23
24            // Swap
25            first->next=second->next;
26            second->next=first;
27            prev->next=second;
28
29            prev=first;
30        }
31        return dummy->next;
32    }
33};