// Last updated: 7/22/2026, 9:20:57 PM
1class Solution {
2public:
3    int minOperations(int n) {
4        int i;
5        int ans = 0;
6        if(n%2 == 0){
7            i = 1;
8        }
9        else{
10            i = 2;
11        }
12
13        while(i<n){
14            ans += i;
15            i += 2;
16        }
17        return ans;
18    }
19};