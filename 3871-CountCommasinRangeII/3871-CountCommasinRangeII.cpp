// Last updated: 9/9/2026, 11:51:11 AM
1class Solution {
2public:
3    long long countCommas(long long n) {
4        long long ans = 0;
5
6        for(long long i = 1000; i<=n; i *= 1000){
7            ans += n - i + 1;
8        }
9        return ans;
10    }
11};