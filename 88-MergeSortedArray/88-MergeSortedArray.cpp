// Last updated: 5/15/2026, 9:38:09 PM
1class Solution {
2public:
3    long long removeZeros(long long n) {
4        long long rev = 0;
5
6        while(n >0){
7            if(n%10 !=0){
8                rev = rev*10 + n%10;
9            }
10                n /= 10;
11        }
12        
13        string straight = to_string(rev);
14        reverse(straight.begin(), straight.end());
15
16
17        return stoll(straight);
18    }
19};