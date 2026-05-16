// Last updated: 5/16/2026, 9:29:50 PM
1class Solution {
2public:
3    int countOdds(int low, int high) {
4        int count = 0;
5
6        for(int i=low; i<=high; i++){
7            if(i%2 == 1){
8                count++;
9            }
10        }
11        return count;
12    }
13};