// Last updated: 5/7/2026, 9:31:24 AM
1class Solution {
2public:
3    int alternateDigitSum(int n) {
4        int count = 0;
5        int sum = 0;
6
7        for(int i=n; i>0; i=i/10){
8            if(count%2 == 0){
9                sum += i%10;
10            }
11            else{
12                sum -= i%10;
13            }
14            count++;
15        }
16        if(count%2 == 0){
17            sum = sum * (-1);
18        }
19        return sum;
20    }
21};