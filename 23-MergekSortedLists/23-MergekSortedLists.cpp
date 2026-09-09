// Last updated: 9/9/2026, 3:00:52 PM
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
13    ListNode* mergeKLists(vector<ListNode*>& lists) {
14        vector<int> arr;
15
16        for(int i=0; i<lists.size(); i++){
17            ListNode* curr = lists[i];
18
19            while(curr != nullptr){
20                arr.push_back(curr->val);
21                curr = curr->next;
22            }
23        }
24
25        sort(arr.begin(), arr.end());
26
27        ListNode* head = new ListNode(0);
28        ListNode* curr = head;
29
30        for(int i=0; i<arr.size(); i++){
31            curr->next = new ListNode(arr[i]);
32            curr = curr->next;
33        }
34
35        return head->next;
36    }
37};