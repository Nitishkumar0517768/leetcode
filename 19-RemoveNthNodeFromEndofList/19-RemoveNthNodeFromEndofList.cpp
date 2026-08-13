// Last updated: 8/13/2026, 10:07:18 AM
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
14
15        int count = 0;
16        ListNode* curr = head;
17
18        while(curr != nullptr){
19            curr = curr->next;
20            count++;
21        }
22        
23        int tar = count - n;
24        count = 0;
25        curr = head;
26
27        if(tar == 0){
28            return curr->next;
29        }
30
31        while(curr != nullptr){
32            count++;
33
34            if(count == tar){
35                curr->next = curr->next->next;
36            }
37            else{
38                curr = curr->next;
39            }
40        }
41    return head;
42    }
43};