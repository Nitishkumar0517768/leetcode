// Last updated: 5/20/2026, 9:55:21 AM
1class Solution {
2public:
3    bool isBalanced(string num) {
4        int sum1 = 0;
5        int sum2 = 0;
6
7        for(int i=0; i<num.size(); i++){
8            if(i%2 == 0){
9                sum1 = sum1 + (num[i] - '0');
10            }
11            else{
12                sum2 = sum2 + (num[i] - '0');
13            }
14        }
15
16        return sum1 == sum2;
17    }
18};