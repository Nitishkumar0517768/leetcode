// Last updated: 4/23/2026, 9:55:40 AM
1class Solution {
2public:
3    int mirrorDistance(int n) {
4        int rev = 0;
5        int i = n;
6        while(i != 0){
7            rev = rev*10 + i%10;
8            i = i/10;
9        }
10
11        int diff = n - rev;
12
13        if(diff < 0){
14            return -diff;
15        }
16        return diff;
17    }
18};