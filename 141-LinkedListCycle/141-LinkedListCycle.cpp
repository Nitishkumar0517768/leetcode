// Last updated: 9/8/2026, 11:09:26 AM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10public:
11    bool hasCycle(ListNode *head) {
12        ListNode* fast = head;
13        ListNode* slow = head;
14
15        while(fast && fast->next){
16            slow = slow->next;
17            fast = fast->next->next;
18            
19            if(fast == slow){
20                return true;
21            }
22        }
23        return false;
24    }
25};