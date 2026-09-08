// Last updated: 9/8/2026, 11:12:36 AM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10public:
11    bool hasCycle(ListNode *head) {
12        // ListNode* fast = head;
13        // ListNode* slow = head;
14
15        // while(fast && fast->next){
16        //     slow = slow->next;
17        //     fast = fast->next->next;
18
19        //     if(fast == slow){
20        //         return true;
21        //     }
22        // }
23        // return false;
24
25
26
27        // 2nd methode with set
28
29        set<ListNode*> add;
30        ListNode* curr = head;
31
32        while(curr != nullptr){
33            if(add.count(curr)){
34                return true;
35            }
36            add.insert(curr);
37            curr = curr->next;
38        }
39        return false;
40    }
41};