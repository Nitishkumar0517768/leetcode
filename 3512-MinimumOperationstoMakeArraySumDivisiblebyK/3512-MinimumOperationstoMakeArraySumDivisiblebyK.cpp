// Last updated: 5/18/2026, 11:47:02 AM
1class Solution {
2public:
3    int mirrorDistance(int n) {
4        int rev = 0;
5        int i = n;
6        while(i>0){
7            rev = rev * 10 + i%10;
8            i=i/10;
9        }
10
11        return abs(n - rev);
12    }
13};