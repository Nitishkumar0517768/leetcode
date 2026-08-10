// Last updated: 8/10/2026, 2:56:54 PM
1class Solution {
2public:
3    ListNode* removeElements(ListNode* head, int val) {
4        
5        // Remove nodes from the beginning
6        while (head != nullptr && head->val == val) {
7            head = head->next;
8        }
9
10        ListNode* curr = head;
11
12        // Remove nodes after curr
13        while (curr != nullptr && curr->next != nullptr) {
14            
15            if (curr->next->val == val) {
16                curr->next = curr->next->next;
17            }
18            else {
19                curr = curr->next;
20            }
21        }
22
23        return head;
24    }
25};