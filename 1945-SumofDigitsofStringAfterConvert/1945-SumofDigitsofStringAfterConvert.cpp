// Last updated: 8/3/2026, 5:58:38 PM
1class Solution {
2public:
3    string digitSum(string s, int k) {
4        string temp1 = s;
5        string temp2 = "";
6
7        while (true) {
8            int sum = 0;
9            int count = 0;
10
11            if (temp1.size() <= k) {
12                return temp1;
13            }
14            for (int i = 0; i < temp1.size(); i++) {
15                sum += temp1[i] - '0';
16                count++;
17
18                if (count == k) {
19                    temp2 += to_string(sum);
20                    sum = 0;
21                    count = 0;
22                }
23
24 
25                if (i == temp1.size() - 1 && count > 0) {
26                    temp2 += to_string(sum);
27                }
28            }
29
30
31            temp1 = temp2;
32            temp2 = "";
33        }
34    }
35};