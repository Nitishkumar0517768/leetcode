// Last updated: 6/16/2026, 3:13:37 PM
1class Solution {
2public:
3    int compareVersion(string version1, string version2) {
4
5        while (!version1.empty() || !version2.empty()) {
6
7            string v1 = "", v2 = "";
8
9            int i = 0;
10            while (i < version1.size() && version1[i] != '.') {
11                v1 += version1[i];
12                i++;
13            }
14
15            if (i < version1.size()) { // '.' mila
16                version1.erase(0, i + 1);
17            } else {
18                version1.erase(0, i);
19            }
20
21            int j = 0;
22            while (j < version2.size() && version2[j] != '.') {
23                v2 += version2[j];
24                j++;
25            }
26
27            if (j < version2.size()) { // '.' mila
28                version2.erase(0, j + 1);
29            } else {
30                version2.erase(0, j);
31            }
32
33            int num1 = v1.empty() ? 0 : stoi(v1);
34            int num2 = v2.empty() ? 0 : stoi(v2);
35
36            if (num1 > num2) return 1;
37            if (num1 < num2) return -1;
38        }
39
40        return 0;
41    }
42};