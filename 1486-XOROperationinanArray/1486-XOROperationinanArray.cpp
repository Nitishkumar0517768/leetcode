// Last updated: 9/6/2026, 11:28:22 PM
1class Solution {
2public:
3    int xorOperation(int n, int start) {
4        int ans = start;
5        int num = start;
6
7        for(int i=1; i<n; i++){
8            num += 2;
9            ans = ans ^ num;
10        }
11        return ans;
12    }
13};