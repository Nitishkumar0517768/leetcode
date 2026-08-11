// Last updated: 8/11/2026, 3:09:17 PM
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
13    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
14        unordered_set<int> st;
15
16        for(int i=0; i<nums.size(); i++){
17            st.insert(nums[i]);
18        }
19            
20            while(head != nullptr && st.count(head->val) ){
21                head = head->next;
22            }
23            
24            ListNode* curr = head;
25
26                while(curr->next != nullptr && curr != nullptr){
27                    if(st.count(curr->next->val)){
28                        curr->next = curr->next->next;
29                    }
30                    else{
31                        curr = curr->next;
32                    }
33                }
34        return head;
35    }
36};