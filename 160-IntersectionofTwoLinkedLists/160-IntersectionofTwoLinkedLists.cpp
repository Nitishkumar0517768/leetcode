// Last updated: 8/5/2026, 3:46:08 PM
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
11    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
12        
13        
14        // ListNode* curr = headA;
15        // int countA = 0;
16        // int countB = 0;
17
18        // while(curr != nullptr){
19        //     countA++;
20        //     curr = curr->next;
21        // }
22
23        // curr = headB;
24        // while(curr != nullptr){
25        //     countB++;
26        //     curr = curr->next;
27        // }
28
29        // if(countA > countB){
30        //     countA = countA-countB;
31        //     int count=0;
32        //     while(count < countA){
33        //         headA = headA->next;
34        //         count++;
35        //     }
36        // }
37        // else{
38        //     int count = 0;
39        //     countB = countB - countA;
40        //     while(count < countB){
41        //         headB = headB->next;
42        //         count++;
43        //     }
44        // }
45
46        // while(headA != headB){
47        //     headA = headA->next;
48        //     headB = headB->next;
49        // }
50        // return headA;
51        
52        
53
54        // Method-B
55        ListNode* a = headA;
56        ListNode* b = headB;
57
58        while(a != b){
59            a = (a==NULL?headB:a->next);
60            b = (b==NULL?headA : b->next);
61        }
62        return a;
63    }
64};