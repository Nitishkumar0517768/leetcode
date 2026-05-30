// Last updated: 5/30/2026, 9:30:40 AM
1class Solution {
2public:
3    bool isPowerOfTwo(int n) {
4       if(n <= 0) return false;
5
6       int i = n;
7
8       while(i!=1){
9            if(i%2 == 1){
10                return false;
11            }
12            i = i/2;
13       }
14       return true;
15    }
16};