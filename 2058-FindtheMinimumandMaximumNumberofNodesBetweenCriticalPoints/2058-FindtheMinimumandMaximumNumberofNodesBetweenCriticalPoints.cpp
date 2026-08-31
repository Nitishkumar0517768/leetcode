// Last updated: 8/31/2026, 5:13:24 PM
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
11
12class Solution {
13public:
14    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
15        ListNode *curr = head;
16        if(curr == nullptr || curr->next == nullptr || curr->next->next == nullptr){
17            return {-1, -1};
18        }
19
20        vector<int> temp;
21
22        int pos = 1;
23
24        while(curr->next->next != nullptr){
25            if((curr->val > curr->next->val && curr->next->val < curr->next->next->val) || (curr->val < curr->next->val && curr->next->val > curr->next->next->val)){
26                temp.push_back(pos + 1);
27            }
28            curr = curr->next;
29            pos++;
30        }
31
32        if(temp.size() < 2){
33            return {-1, -1};
34        }
35
36        int minDis = INT_MAX;
37
38        for(int i=0; i<temp.size()-1; i++){
39            minDis = min(minDis, temp[i+1]-temp[i]);
40        }
41        int maxDis = temp[temp.size()-1] - temp[0];
42
43        return {minDis, maxDis};
44    }
45};