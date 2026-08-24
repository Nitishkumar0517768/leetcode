// Last updated: 8/24/2026, 3:40:36 PM
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
13    int pairSum(ListNode* head) {
14        ListNode* temp = nullptr;
15        ListNode* slow = head;
16        ListNode* fast = head;
17
18        while(fast != nullptr && fast->next != nullptr){
19            temp = slow;
20            slow = slow->next;
21            fast = fast->next->next;
22        }
23        temp->next = nullptr;
24
25        ListNode* prv = nullptr;
26
27        while(slow != nullptr){
28            ListNode* nxtNode = slow->next;
29            slow->next = prv;
30            prv = slow;
31            slow = nxtNode;
32        }
33
34        int maxS = 0;
35        ListNode* curr1 = head;
36        ListNode* curr2 = prv;
37
38        while(curr1 != nullptr && curr2 != nullptr){
39            int sum = curr1->val + curr2->val;
40            maxS = max(maxS, sum);
41
42            curr1 = curr1->next;
43            curr2 = curr2->next;
44        }
45        return maxS;
46    }
47};