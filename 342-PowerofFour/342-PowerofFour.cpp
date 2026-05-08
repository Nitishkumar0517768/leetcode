// Last updated: 5/8/2026, 10:14:28 AM
1class Solution {
2public:
3    bool isPowerOfFour(int n) {
4        if(n <= 0) return false;
5
6        int i=n;
7
8        while(i != 1){
9        
10            if(i%4 != 0) return false;
11
12            i = i/4;
13        }
14        return true;
15    }
16};