// Last updated: 8/19/2026, 3:45:17 PM
1class Solution {
2public:
3    ListNode* reverseEvenLengthGroups(ListNode* head) {
4
5        if(head == nullptr || head->next == nullptr){
6            return head;
7        }
8
9        ListNode* curr = head;
10        ListNode* prev = nullptr;
11        int count = 0;
12
13        while(curr != nullptr){
14
15            count++;
16
17            // Actual group size check
18            int actualCount = 0;
19            ListNode* check = curr;
20
21            for(int i = 0; i < count && check != nullptr; i++){
22                actualCount++;
23                check = check->next;
24            }
25
26            ListNode* prv = nullptr;
27            ListNode* temp = curr;
28
29            // actualCount even hai to reverse
30            if(actualCount % 2 == 0){
31
32                for(int i = 0; i < actualCount && curr != nullptr; i++){
33
34                    ListNode* nxtNode = curr->next;
35
36                    curr->next = prv;
37
38                    prv = curr;
39
40                    curr = nxtNode;
41                }
42
43                // previous group ko reversed group se connect
44                if(prev != nullptr){
45                    prev->next = prv;
46                }
47
48                // old first node ab last node hai
49                temp->next = curr;
50
51                prev = temp;
52            }
53
54            // odd group
55            else{
56
57                for(int i = 0; i < actualCount && curr != nullptr; i++){
58
59                    prev = curr;
60                    curr = curr->next;
61                }
62            }
63        }
64
65        return head;
66    }
67};