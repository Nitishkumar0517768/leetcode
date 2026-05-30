// Last updated: 5/30/2026, 9:37:08 AM
1class Solution {
2public:
3    bool isPowerOfThree(int n) {
4        if(n <= 0) return false;
5
6        while(n != 1){
7            if(n%3 != 0) return false;
8            n=n/3;
9        }
10        return true;
11    }
12};