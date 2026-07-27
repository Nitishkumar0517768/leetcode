// Last updated: 7/27/2026, 3:03:16 PM
1class Solution {
2public:
3    int commonFactors(int a, int b) {
4        int count = 0;
5        int n = min(a,b);
6
7        for(int i=1; i<=n; i++){
8            if(a%i == 0 && b%i == 0){
9                count++;
10            }
11        }
12        return count;
13    }
14};