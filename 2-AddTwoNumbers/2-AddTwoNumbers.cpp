// Last updated: 8/16/2026, 4:12:40 PM
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
13    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
14        ListNode* dummy = new ListNode(0);
15        ListNode* curr = dummy;
16        int carry = 0;
17
18        while(l1 != nullptr || l2 != nullptr || carry != 0){
19            int sum = carry;
20
21            if(l1 != nullptr){
22                sum += l1->val;
23                l1 = l1->next;
24            }
25
26            if(l2 != nullptr){
27                sum += l2->val;
28                l2 = l2->next;
29            }
30
31            ListNode* temp = new ListNode(sum%10);
32            curr->next = temp;
33            curr = curr->next;
34            carry = sum/10;
35        }
36        return dummy->next;
37    }
38};