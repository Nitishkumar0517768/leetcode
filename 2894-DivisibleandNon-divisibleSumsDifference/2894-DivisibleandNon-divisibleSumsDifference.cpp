// Last updated: 4/23/2026, 3:02:22 PM
1class Solution {
2public:
3    int differenceOfSums(int n, int m) {
4        int sum1 = 0;
5        int sum2 = 0;
6
7        for(int i=1; i<=n; i++){
8            if(i % m == 0){
9                sum2 = sum2 + i;
10            }
11            else{
12                sum1 = sum1 + i;
13            }
14        }
15        return sum1 - sum2;
16    }
17};