// Last updated: 8/3/2026, 5:12:17 PM
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
14        ListNode* curr = head;
15        int count = 0;
16
17        while(curr != NULL){
18            count++;
19            curr = curr->next;
20        }
21
22        curr = head;
23        int m = count - n;
24        count = 0;
25
26        if(m==0){
27            return curr->next;
28        }
29
30        while(curr != NULL){
31            count++;
32            if(count == m){
33                curr->next = curr->next->next;
34                break;
35            }
36            curr = curr->next;
37        }
38        return head;
39    }
40};