// Last updated: 8/22/2026, 10:18:12 PM
1class Solution {
2public:
3    bool checkDivisibility(int n) {
4        int m = n;
5        int sum = 0;
6        int pro = 1;
7
8        while(m>0){
9            sum = sum + m%10;
10            pro = pro *  (m%10);
11            m = m/10;
12        }
13
14        if(n % (sum + pro) == 0){
15            return true;
16        }
17        return false;
18    }
19};