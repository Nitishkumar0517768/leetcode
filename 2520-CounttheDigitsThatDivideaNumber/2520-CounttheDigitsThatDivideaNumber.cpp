// Last updated: 4/24/2026, 11:01:27 AM
1class Solution {
2public:
3    int countDigits(int num) {
4        int i = num;
5        int count = 0;
6
7        while(i>0){
8            int digit = i%10;
9            if(num % digit == 0){
10                count ++;
11            }
12            i = i/10;
13        }
14        return count;
15    }
16};