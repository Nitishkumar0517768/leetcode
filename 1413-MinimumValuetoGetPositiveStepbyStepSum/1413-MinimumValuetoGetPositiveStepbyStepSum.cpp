// Last updated: 5/16/2026, 9:27:35 PM
1class Solution {
2public:
3    bool isSameAfterReversals(int num) {
4        if(num < 10) return true;
5
6        int count = 0;
7
8        for(int i=num; i>0; i/=10){
9            int rev = i%10;
10            if(rev != 0) count++;
11
12            if(rev == 0 && count == 0) return false;
13        }
14        return true;
15    }
16};