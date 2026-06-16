// Last updated: 6/16/2026, 3:27:39 PM
1class Solution {
2public:
3    int compareVersion(string version1, string version2) {
4        int n = version1.size();
5        int m = version2.size();
6
7        int i = 0, j = 0;
8
9        while (i < n || j < m) {
10            int num1 = 0, num2 = 0;
11
12            while (i < n) {
13                if (version1[i] == '.') {
14                    i++;
15                    break;
16                }
17                num1 = num1 * 10 + (version1[i] - '0');
18                i++;
19            }
20
21            while (j < m) {
22                if (version2[j] == '.') {
23                    j++;
24                    break;
25                }
26                num2 = num2 * 10 + (version2[j] - '0');
27                j++;
28            }
29
30            if (num1 < num2) return -1;
31            if (num1 > num2) return 1;
32        }
33
34        return 0;
35    }
36};