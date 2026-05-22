// Last updated: 5/22/2026, 8:24:43 PM
1class Solution {
2public:
3    double myPow(double x, int n) {
4       long long m = n;
5    double a = 1;
6
7    if(x == 1){
8        return 1;
9    }
10
11    if(m<0){
12        x = 1/x;
13        m = -m;
14    }
15
16    while(m > 0){
17    if (m % 2 == 1) {  
18        a = a * x;
19    }
20    x = x * x;          
21    m = m / 2;
22    }
23
24    return a; 
25    }
26};