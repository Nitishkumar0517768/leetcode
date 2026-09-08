// Last updated: 9/8/2026, 11:32:33 AM
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
13    bool isPalindrome(ListNode* head) {
14        ListNode* slow = head;
15        ListNode* fast = head;
16
17        while(fast && fast->next){
18            slow = slow->next;
19            fast = fast->next->next;
20        }
21
22        ListNode* rev = nullptr;
23
24        while(slow != nullptr){
25            ListNode* nxt = slow->next;
26            slow->next = rev;
27            rev = slow;
28            slow = nxt;
29        }
30
31        ListNode* curr = head;
32
33        while(rev != nullptr && curr != nullptr){
34            if(rev->val != curr->val){
35                return false;
36            }
37            rev = rev->next;
38            curr = curr->next;
39        }
40        return true;
41    }
42};