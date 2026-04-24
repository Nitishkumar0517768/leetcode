// Last updated: 4/24/2026, 11:09:41 AM
1class Solution {
2public:
3    int numberOfSteps(int num) {
4        int count = 0;
5        int n = num;
6
7        for(int i=0; i<n; i++){
8            if(num % 2 == 0){
9                num = num/2;
10                count++;
11            }
12            if(num % 2 == 1){
13                num = num - 1;
14                count++;
15            }
16            if(num == 0){
17                break;
18            }
19        }
20        return count;
21    }
22};