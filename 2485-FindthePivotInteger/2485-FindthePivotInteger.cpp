// Last updated: 7/21/2026, 5:19:52 PM
1class Solution {
2public:
3    int pivotInteger(int n) {
4        int total = n * (n+1) / 2;
5        int sum1 = 0;
6
7        for(int i=1; i<=n; i++){
8            sum1 += i;
9
10            if(sum1 == total-sum1+i){
11                return i;
12            }
13        }
14        return -1;
15    }
16};