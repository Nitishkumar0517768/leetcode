// Last updated: 9/17/2026, 10:10:29 AM
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
13    ListNode* oddEvenList(ListNode* head) {
14        if (head == nullptr || head->next == nullptr ||
15            head->next->next == nullptr) {
16            return head;
17        }
18
19        ListNode* curr = head;
20        ListNode* temp = nullptr;
21        ListNode* head1 = nullptr;
22
23        while (curr->next != nullptr && curr->next->next != nullptr) {
24
25            if (head1 == nullptr) {
26                head1 = curr->next;
27                temp = head1;
28
29                curr->next = curr->next->next;
30                curr = curr->next;
31            } else {
32                temp->next = curr->next;
33                temp = temp->next;
34
35                curr->next = curr->next->next;
36                curr = curr->next;
37            }
38        }
39
40        if (curr->next != nullptr) {
41            temp->next = curr->next;
42            temp = temp->next;
43            curr->next = nullptr;
44        }
45
46        temp->next = nullptr;
47        curr->next = head1;
48
49        return head;
50    }
51};