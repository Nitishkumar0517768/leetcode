// Last updated: 5/30/2026, 9:43:14 AM
1class Solution {
2public:
3    bool isPowerOfFour(int n) {
4        if(n <=0 ) return false;
5
6        int i=n;
7        
8        while(i != 1){
9            if(i%4 != 0) return false;
10            i = i/4;
11        }
12        return true;
13    }
14};