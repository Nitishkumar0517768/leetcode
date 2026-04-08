// Last updated: 4/8/2026, 12:16:16 PM
1class Solution {
2public:
3    int fib(int n) {
4        if(n <=1) return n;
5
6        int a = 0; 
7        int b = 1; 
8        int c;
9
10        for(int i=2; i<=n; i++){
11            c = a+b;
12            a = b;
13            b = c;
14        }
15        return b;
16    }
17};