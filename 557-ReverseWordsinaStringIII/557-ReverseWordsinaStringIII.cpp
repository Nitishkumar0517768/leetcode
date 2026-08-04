// Last updated: 8/4/2026, 11:55:39 AM
1class Solution {
2public:
3    string reverseWords(string s) {
4        int i = 0;
5        for (int j = 0; j < s.size(); j++) {
6
7            if (s[j] == ' ' || j == s.size() - 1) {
8                int k;
9
10                if (j == s.size() - 1)
11                    k = j;
12                else
13                    k = j - 1;
14
15                int l = i;
16
17                while (k > l) {
18                    swap(s[k], s[l]);
19                    k--;
20                    l++;
21                }
22
23                i = j + 1;
24            }
25        }
26        return s;
27    }
28};