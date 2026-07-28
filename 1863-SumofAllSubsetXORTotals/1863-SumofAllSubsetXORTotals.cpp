// Last updated: 7/28/2026, 5:12:20 PM
1class Solution {
2public:
3    int subsetXORSum(vector<int>& nums) {
4        int n = nums.size();
5        int ans = 0;
6
7        for (int mask = 0; mask < (1 << n); mask++) {
8
9            int xr = 0;
10
11            for (int i = 0; i < n; i++) {
12
13                if (mask & (1 << i)) {
14                    xr ^= nums[i];
15                }
16            }
17
18            ans += xr;
19        }
20
21        return ans;
22    }
23};