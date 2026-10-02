// Last updated: 10/2/2026, 2:17:29 PM
1class Solution {
2public:
3    int mySqrt(int x) {
4
5        if(x == 0){
6            return 0;
7        }
8
9        if(x <= 3){
10            return 1;
11        }
12
13        int low = 0;
14        int high = x/2;
15
16        while(low <= high){
17            int mid = low + (high-low)/2;
18
19            long long square = 1LL * mid * mid;
20
21            if(square == x){
22                return mid;
23            }
24
25            if(square > x){
26                high = mid - 1;
27            }
28            else{
29                low = mid + 1;
30            }
31        }
32        return high;
33        
34    }
35};