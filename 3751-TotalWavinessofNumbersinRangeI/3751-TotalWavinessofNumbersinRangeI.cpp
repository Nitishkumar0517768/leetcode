// Last updated: 7/6/2026, 1:08:57 PM
1class Solution {
2public:
3    int waviness(int x) {
4        string s = to_string(x);
5        int n = s.size();
6
7        if (n < 3) return 0;
8
9        int cnt = 0;
10        for (int i = 1; i < n - 1; i++) {
11            if ((s[i] > s[i - 1] && s[i] > s[i + 1]) ||
12                (s[i] < s[i - 1] && s[i] < s[i + 1])) {
13                cnt++;
14            }
15        }
16        return cnt;
17    }
18
19    int totalWaviness(int num1, int num2) {
20        int ans = 0;
21
22        for (int x = num1; x <= num2; x++) {
23            ans += waviness(x);
24        }
25
26        return ans;
27    }
28};