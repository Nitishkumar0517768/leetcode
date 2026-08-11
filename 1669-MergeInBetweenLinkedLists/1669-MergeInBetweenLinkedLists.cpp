// Last updated: 8/11/2026, 5:20:58 PM
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
13    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
14        ListNode* curr = list1;
15        ListNode* temp = nullptr;
16        int count = 0;
17
18        while(curr != nullptr){
19
20            if(count == b){
21                temp = curr->next;
22            }
23            curr = curr->next;
24            count++;
25        }
26
27        curr = list1;
28        count = 0;
29
30        while(curr != nullptr){
31
32            if(count == a-1){
33                curr->next = list2;
34                break;
35            }
36            curr = curr->next;
37            count++;
38        }
39        
40        while(list2->next != nullptr){
41            list2 = list2->next;
42        }
43
44        list2->next = temp;
45
46        return list1;
47    }
48};