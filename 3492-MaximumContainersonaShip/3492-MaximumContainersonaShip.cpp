// Last updated: 8/9/2026, 2:50:42 PM
1class Solution {
2public:
3    int maxContainers(int n, int w, int maxWeight) {
4        int ans = maxWeight/w;
5
6        return min(ans, n*n);
7    }
8};