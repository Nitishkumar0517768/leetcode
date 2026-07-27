// Last updated: 7/27/2026, 4:45:49 PM
1class Solution {
2public:
3    int totalMoney(int n) {
4        int m = n/7 + 1;
5        int count = 0;
6        int sum = 0;
7        int k = 0;
8
9        for(int i=0; i<m; i++){
10            for(int j=1+k; j<=7+k; j++){
11                sum += j;
12                count++;
13                if(count == n){
14                    return sum;
15                }
16            }
17            k++;
18        }
19        return sum;
20    }
21};