// Last updated: 6/7/2026, 9:30:10 AM
1class Solution {
2public:
3    int sumOfGoodIntegers(int n, int k) {
4        long long ans = 0 ;
5
6        for(int x = max(1, n-k); x <= n+k; x++){
7    if((n & x) == 0){
8        ans += x;
9    }
10}
11
12return ans;
13    }
14};