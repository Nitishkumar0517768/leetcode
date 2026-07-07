// Last updated: 7/7/2026, 11:08:55 AM
1class Solution {
2public:
3    long long sumAndMultiply(int n) {
4        int a = 0;
5        long long b = 0;
6        int i = 1;
7        long long sum = 0;
8
9        while(n > 0){
10            if(n%10==0){
11                n = n/10;
12                continue;
13            }
14
15            a = n%10;
16            sum = sum + a;
17            b = a*i + b;
18            i = i*10;
19            n = n/10;
20        }
21
22        return b*sum;
23    }
24};