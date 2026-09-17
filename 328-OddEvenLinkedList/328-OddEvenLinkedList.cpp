// Last updated: 9/17/2026, 11:06:09 AM
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
13    ListNode* deleteMiddle(ListNode* head) {
14        if(head == nullptr){
15            return head;
16        }
17
18        ListNode* slow = head;
19        ListNode* fast = head;
20        ListNode* temp = new ListNode(0);
21        ListNode* curr = temp; 
22
23        while(fast != nullptr && fast->next != nullptr){
24            curr->next = slow;
25            curr = curr->next;
26            slow = slow->next;
27            fast = fast->next->next;
28        }
29
30        curr->next = slow->next;
31
32        return temp->next;
33    }
34};