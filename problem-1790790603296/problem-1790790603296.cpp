// Last updated: 9/30/2026, 11:20:03 PM
1// The API isBadVersion is defined for you.
2// bool isBadVersion(int version);
3
4class Solution {
5public:
6    int firstBadVersion(int n) {
7        // int low = 1;
8        // int high = n;
9        // int ans = 1;
10
11        // while(low <= high){
12        //     int mid = low + (high-low)/2;
13        //     bool check = isBadVersion(mid);
14
15        //     if(check){
16        //         ans = mid;
17        //         high = mid -1;
18        //     }
19        //     else{
20        //         low = mid + 1;
21        //     }
22        // }
23        // return ans;
24
25
26        // 2nd method
27        int low = 1;
28        int high = n;
29
30        while(low < high){
31            int mid = low + (high-low)/2;
32
33            if(isBadVersion(mid)){
34                high = mid;
35            }
36            else{
37                low = mid + 1;
38            }
39        }
40        return low;
41    }
42};