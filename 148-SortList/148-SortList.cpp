// Last updated: 9/18/2026, 9:45:40 PM
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
13    ListNode* sortList(ListNode* head) {
14        vector<int> nums;
15
16        ListNode* curr = head;
17        ListNode* temp = new ListNode(0);
18        ListNode* head2 = temp;
19
20        while(curr != nullptr){
21            nums.push_back(curr->val);
22            curr = curr->next;
23        }
24
25        sort(nums.begin(), nums.end());
26
27        for(int i=0; i<nums.size(); i++){
28            ListNode* list = new ListNode(nums[i]);
29
30            temp->next = list;
31            temp = temp->next;
32        }
33
34        return head2->next;
35    }
36};