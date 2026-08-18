// Last updated: 8/18/2026, 3:34:59 PM
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
14
15        if(head == nullptr || head->next == nullptr || head->next->next == nullptr){
16            return head;
17        }
18
19        ListNode* curr = head;
20        ListNode* temp = nullptr;
21        ListNode* head1 = nullptr;
22
23        while(curr->next != nullptr && curr->next->next != nullptr){
24            
25            if(head1 == nullptr){
26                head1 = curr->next;
27                temp = head1;
28
29                curr->next = curr->next->next;
30                curr = curr->next;
31            }
32            else{
33                temp->next = curr->next;
34                temp = temp->next;
35
36                curr->next = curr->next->next;
37                curr = curr->next;
38            }
39        }
40
41        if(curr->next != nullptr){
42            temp->next = curr->next;
43            temp = temp->next;
44            curr->next = nullptr;
45        }
46
47        temp->next = nullptr;
48        curr->next = head1;
49
50        return head;
51    }
52};