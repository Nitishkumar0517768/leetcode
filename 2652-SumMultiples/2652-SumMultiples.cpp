// Last updated: 4/15/2026, 10:24:32 AM
1class Solution {
2public:
3    int sumOfMultiples(int n) {
4        int sum = 0;
5
6        for(int i=1; i<=n; i++){
7            if(i%3==0 || i%5 == 0 || i%7==0){
8                sum = sum + i;
9            }
10        }
11    return sum;
12    }
13};