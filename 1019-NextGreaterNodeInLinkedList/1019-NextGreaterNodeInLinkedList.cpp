// Last updated: 8/13/2026, 3:14:21 PM
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
13    vector<int> nextLargerNodes(ListNode* head) {
14        vector<int> ans;
15
16        while(head != nullptr){
17            ans.push_back(head->val);
18            head = head->next;
19        }
20
21        for(int i=0; i<ans.size(); i++){
22            int count = 0;
23            for(int j=i+1; j<ans.size(); j++){
24                if(ans[i] < ans[j]){
25                    ans[i] = ans[j];
26                    count = 1;
27                    break;
28                }
29            }
30            if(count == 0){
31                ans[i] = 0;
32            }
33        }
34
35
36        return ans;
37    }
38};