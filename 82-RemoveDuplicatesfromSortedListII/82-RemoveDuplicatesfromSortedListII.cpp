// Last updated: 8/10/2026, 4:41:48 PM
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
16        ListNode* curr = head;
17
18        while(fast != nullptr && fast->next != nullptr){
19            slow = slow->next;
20            fast = fast->next->next;
21        }
22
23        ListNode* prev = nullptr;
24
25        while(slow != nullptr){
26            ListNode* nextNode = slow->next;
27            slow->next = prev;
28            prev = slow;
29            slow = nextNode;
30        }
31
32        while(prev != nullptr){
33            if(prev->val != curr->val){
34                return false;
35            }
36            prev = prev->next;
37            curr = curr->next;
38        }
39        return true;
40    }
41};