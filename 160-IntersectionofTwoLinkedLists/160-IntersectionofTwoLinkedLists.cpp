// Last updated: 8/5/2026, 3:37:39 PM
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
12        ListNode* curr = headA;
13        int countA = 0;
14        int countB = 0;
15
16        while(curr != nullptr){
17            countA++;
18            curr = curr->next;
19        }
20
21        curr = headB;
22        while(curr != nullptr){
23            countB++;
24            curr = curr->next;
25        }
26
27        if(countA > countB){
28            countA = countA-countB;
29            int count=0;
30            while(count < countA){
31                headA = headA->next;
32                count++;
33            }
34        }
35        else{
36            int count = 0;
37            countB = countB - countA;
38            while(count < countB){
39                headB = headB->next;
40                count++;
41            }
42        }
43
44        while(headA != headB){
45            headA = headA->next;
46            headB = headB->next;
47        }
48        return headA;
49        
50        
51    }
52};