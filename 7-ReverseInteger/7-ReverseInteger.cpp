// Last updated: 4/23/2026, 9:39:52 AM
1class Solution {
2public:
3    int reverse(int x) {
4       long long int rev = 0;
5       int count = 0;
6
7       
8
9       int i = x;
10
11       while(i!=0){
12        rev = rev*10 + i%10;
13        if (rev > INT_MAX || rev < INT_MIN) {
14                return 0;
15            }
16        i = i/10;
17       }
18
19   
20       return rev;
21    }
22};