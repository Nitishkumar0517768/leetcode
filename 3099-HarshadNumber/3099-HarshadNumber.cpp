// Last updated: 4/24/2026, 3:40:47 PM
1class Solution {
2public:
3    int sumOfTheDigitsOfHarshadNumber(int x) {
4        int n = 0;
5
6        int i=x; 
7        while(i>0){
8            n = n + i%10;
9            i /= 10;
10        }
11
12        if(x%n == 0) return n;
13
14        return -1;
15    }
16};