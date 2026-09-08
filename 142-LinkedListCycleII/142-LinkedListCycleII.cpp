// Last updated: 9/8/2026, 11:23:58 AM
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
11    ListNode *detectCycle(ListNode *head) {
12        ListNode* slow = head;
13        ListNode* fast = head;
14        bool check = false;
15
16        while(fast && fast->next){
17            slow = slow->next;
18            fast = fast->next->next;
19
20            if(slow == fast){
21                check = true;
22                break;
23            }
24        }
25
26        if(check == true){
27            ListNode* temp = head;
28
29            while(slow != temp){
30                temp = temp->next;
31                slow = slow->next;
32            }
33            return temp;
34        }
35        return nullptr;
36    }
37};