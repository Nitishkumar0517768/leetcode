// Last updated: 5/8/2026, 10:03:57 AM
1class Solution {
2public:
3    bool isPerfectSquare(int num) {
4        long long int sqrt = 1;
5
6        if(num == 1) return true;
7
8        for( long int i=1; i<=num/2; i++){
9            sqrt = i*i;
10
11            if(sqrt == num) return true;
12
13            if(sqrt > num) return false;
14
15            sqrt = 0;
16        }
17        return false;
18    }
19};