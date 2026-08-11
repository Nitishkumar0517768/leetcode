// Last updated: 8/11/2026, 11:41:44 PM
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
13    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
14        if(list1 == nullptr)
15            return list2;
16
17        if(list2 == nullptr)
18            return list1;
19
20        ListNode* curr1 = list1;
21        ListNode* curr2 = list2;
22        ListNode* headR = nullptr;
23        ListNode* curr = nullptr;
24
25        while(curr1 != nullptr && curr2 != nullptr){
26            if(headR == nullptr){
27                if(curr1->val > curr2->val){
28                    headR = curr2;
29                    curr2 = curr2->next;
30                }
31                else{
32                    headR = curr1;
33                    curr1 = curr1->next;
34                }
35                curr = headR;
36            }
37            else{
38                if(curr1->val > curr2->val){
39                    curr->next = curr2;
40                    curr2 = curr2->next;
41                }
42                else{
43                    curr->next = curr1;
44                    curr1 = curr1->next;
45                }
46            curr = curr->next;
47            }
48        }
49
50        while(curr1 != nullptr){
51            curr->next = curr1;
52            curr1 = curr1->next;
53            curr = curr->next;
54        }
55
56        while(curr2 != nullptr){
57            curr->next = curr2;
58            curr2 = curr2->next;
59            curr = curr->next;
60        }
61
62        return headR;
63    }
64};