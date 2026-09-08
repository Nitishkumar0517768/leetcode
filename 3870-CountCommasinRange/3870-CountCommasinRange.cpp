// Last updated: 9/8/2026, 10:52:54 AM
1class Solution {
2public:
3    int countCommas(int n) {
4        if(n <= 999){
5            return 0;
6        }
7        else{
8            return n-999;
9        }
10    }
11};