// Last updated: 8/2/2026, 9:29:11 PM
1class Solution {
2public:
3    int countEven(int num) {
4        int count = 0;
5        
6        for(int i=1; i<=num; i++){
7            int sum = 0;
8            int j=i;
9
10            while(j>0){
11                sum = sum + j%10;
12                j/=10;
13            }
14            if(sum % 2 == 0){
15                count++;
16            }
17        }
18        return count;
19    }
20};