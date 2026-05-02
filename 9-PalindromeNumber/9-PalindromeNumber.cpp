// Last updated: 5/2/2026, 11:59:16 AM
1class Solution {
2public:
3    bool isPalindrome(int x) {
4        if(x < 0) return false;
5
6        long long int reverse = 0;
7
8        int i = x;
9        while(i>0){
10            reverse = reverse * 10 + i%10;
11            i = i/10;
12        }
13
14        if(x == reverse){
15            return true;
16        }
17        return false;
18    }
19};