// Last updated: 8/7/2026, 3:43:34 PM
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
13    ListNode* rotateRight(ListNode* head, int k) {
14
15        if(head == nullptr || head->next == nullptr || k == 0)
16            return head;
17
18        ListNode* curr = head;
19        int size = 1;
20
21        while(curr->next != nullptr){
22            size++;
23            curr = curr->next;
24        }
25        curr->next = head;
26        
27        k = k % size;
28        
29        int n = size - k;
30
31        for(int i=0; i<n; i++){
32            curr = curr->next;
33        }
34        ListNode* ans = curr->next;
35        curr->next = nullptr;
36
37        return ans;
38    }
39};