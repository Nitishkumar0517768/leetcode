// Last updated: 8/3/2026, 3:50:28 PM
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
13    ListNode* insertGreatestCommonDivisors(ListNode* head) {
14        ListNode* curr = head;
15        ListNode* nxt = curr->next;
16
17        while(nxt != NULL){
18            int n = gcd(curr->val, nxt->val);
19
20            ListNode* newNode = new ListNode(n);
21
22            curr->next = newNode;
23            newNode->next = nxt;
24            curr = nxt;
25            nxt = curr->next;
26        }        
27        return head;
28    }
29};