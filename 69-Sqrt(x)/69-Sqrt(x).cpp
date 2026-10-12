// Last updated: 10/12/2026, 4:58:14 PM
1class Solution {
2public:
3    int mySqrt(int x) {
4        int ans = 0;
5        int low = 0;
6        int high = x;
7
8        while(low <= high){
9            int mid = low + (high-low)/2;
10            long long square = 1LL * mid * mid;
11
12            if(square > x){
13                high = mid - 1;
14            }
15            else{
16                ans = mid;
17                low = low + 1;
18            }
19        }
20        return ans;
21    }
22};