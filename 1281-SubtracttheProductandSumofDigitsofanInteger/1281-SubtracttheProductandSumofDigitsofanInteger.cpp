// Last updated: 4/24/2026, 10:53:03 AM
1class Solution {
2public:
3    int subtractProductAndSum(int n) {
4        int pro = 1;
5        int sum = 0;
6
7        int i=n; 
8        while(i>0){
9            pro *= i%10;
10            sum += i%10;
11            i/=10;
12        }
13        return pro-sum;
14    }
15};