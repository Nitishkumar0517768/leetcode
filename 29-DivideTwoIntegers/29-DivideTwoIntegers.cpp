// Last updated: 5/30/2026, 12:29:17 PM
1class Solution {
2public:
3    int divide(int dividend, int divisor) {
4        long long int m = dividend;
5    long long int n = divisor;
6    int divid = 0;
7    int divis = 0;
8    long long int count = 0;
9
10    if(divisor == 0) return INT_MAX;
11    if (dividend == INT_MIN && divisor == -1) return INT_MAX;
12
13    if(n == 1) return m;
14    if(n == -1) return -m;
15 
16
17    if(m<0){
18        m = -m;
19        divid = 1;
20    }
21    if(n<0){
22        n = -n;
23        divis = 1;
24    }
25
26    for(long long int i=n; i<=m; i+=n ){
27        count ++;
28    }
29    if(divid == 1 && divis == 1){
30        count = count;
31    }
32    else if(divid == 1 || divis == 1){
33            count = -count;
34    }
35    if (count > INT_MAX) return INT_MAX;
36    if (count < INT_MIN) return INT_MIN;
37    return (int)count;
38    }
39};