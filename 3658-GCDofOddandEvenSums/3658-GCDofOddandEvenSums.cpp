// Last updated: 7/15/2026, 10:08:07 PM
1class Solution {
2public:
3    int gcdOfOddEvenSums(int n) {
4       int sumOdd = 0;
5       int sumEven = 0;
6
7       for(int i=1; i<=2*n; i++){
8            if(i%2 == 0){
9                sumEven += i;
10            }
11            else{
12                sumOdd += i;
13            }
14       }
15
16       for(int j=sumOdd; j>=1; j--){
17            if(sumOdd % j == 0 && sumEven % j == 0){
18                return j;
19            }
20       }
21       return 1;
22    }
23};