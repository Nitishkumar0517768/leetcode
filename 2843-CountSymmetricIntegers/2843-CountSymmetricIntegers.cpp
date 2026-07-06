// Last updated: 7/6/2026, 1:23:34 PM
1class Solution {
2public:
3    bool isSymmetric(int num) {
4        string s = to_string(num);
5
6        if (s.size() % 2 != 0)
7            return false;
8
9        int n = s.size();
10        int leftSum = 0, rightSum = 0;
11
12        for (int i = 0; i < n / 2; i++)
13            leftSum += s[i] - '0';
14
15        for (int i = n / 2; i < n; i++)
16            rightSum += s[i] - '0';
17
18        return leftSum == rightSum;
19    }
20
21    int countSymmetricIntegers(int low, int high) {
22        int ans = 0;
23
24        for (int i = low; i <= high; i++) {
25            if (isSymmetric(i))
26                ans++;
27        }
28
29        return ans;
30    }
31};