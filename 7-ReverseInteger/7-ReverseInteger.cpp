// Last updated: 5/2/2026, 11:42:44 AM
1class Solution {
2public:
3    int reverse(int x) {
4       long long int rev = 0;
5
6       int i = x;
7       
8       while(i!=0){
9        rev = rev * 10 + i%10;
10
11        if(rev > INT_MAX || rev < INT_MIN){
12            return 0;
13        }
14        i = i/10;
15       }
16       return rev;
17    }
18};