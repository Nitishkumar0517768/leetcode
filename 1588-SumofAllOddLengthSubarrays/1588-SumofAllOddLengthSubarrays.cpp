// Last updated: 7/28/2026, 3:50:41 PM
1class Solution {
2public:
3    int sumOddLengthSubarrays(vector<int>& arr) {
4        int n = arr.size();
5        int ans = 0;
6
7        for (int len = 1; len <= n; len += 2) {
8            for (int i = 0; i + len <= n; i++) {
9                int sum = 0;
10                for (int j = i; j < i + len; j++) {
11                    sum += arr[j];
12                }
13                ans += sum;
14            }
15        }
16
17        return ans;
18    }
19};