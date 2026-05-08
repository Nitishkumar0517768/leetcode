// Last updated: 5/8/2026, 10:11:34 AM
1class Solution {
2public:
3    bool isPowerOfThree(int n) {
4        if(n<=0) return false;
5
6        int i=n;
7
8        while(i != 1){
9
10            if(i%3 != 0) return false;
11            
12            i = i/3;
13        }
14        return true;
15    }
16};