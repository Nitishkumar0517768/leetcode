// Last updated: 9/17/2026, 10:51:28 AM
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
13    ListNode* removeNthFromEnd(ListNode* head, int n) {
14        if(head->next == nullptr){
15            return nullptr;
16        }
17
18        ListNode* curr = head;
19        int count = 0;
20
21        while(curr != nullptr){
22            count++;
23            curr = curr->next;
24        }
25
26        if(count == n){
27            return head->next;
28        }
29
30        int m = count - n;
31        count = 0;
32        curr = head;
33
34        while(curr != nullptr){
35            count++;
36
37            if(count == m){
38                curr->next = curr->next->next;
39                break;
40            }
41            curr = curr->next;
42        }
43        return head;
44    }
45};