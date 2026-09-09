// Last updated: 9/9/2026, 3:44:56 PM
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
15        if(left == right){
16            return head;
17        }
18
19        if(left == 1){
20            ListNode* curr = head;
21            ListNode* rev = nullptr;
22
23            for(int i=left; i<= right; i++){
24                ListNode* nxt = curr->next;
25                curr->next = rev;
26                rev = curr;
27                curr = nxt;
28            }
29            head->next = curr;
30            
31            return rev;
32        }
33
34        ListNode* curr = head;
35
36        for(int i=1; i<left-1; i++){
37            curr = curr->next;
38        }
39
40        ListNode* last = curr->next;
41        ListNode* temp = curr->next;
42        ListNode* rev = nullptr;
43
44        for(int i=left; i<=right; i++){
45            ListNode* nxt = temp->next;
46            temp->next = rev;
47            rev = temp;
48            temp = nxt;
49        }
50        curr->next = rev;
51        last->next = temp;
52
53        return head;
54    }
55};