// Last updated: 8/13/2026, 10:08:52 AM
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
18        int count = 0;
19        ListNode* curr = head;
20
21        while(curr != nullptr){
22            curr = curr->next;
23            count++;
24        }
25
26        int m = count - n;
27        count = 0;
28        curr = head;
29
30        if(m == 0){
31            return curr->next;
32        }
33
34        while(curr != nullptr ){
35            count++;
36
37            if(count == m){
38                curr->next = curr->next->next;
39            }
40            else{
41                curr = curr->next;
42            }
43        }
44        return head;
45
46    }
47};