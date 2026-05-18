// Last updated: 5/18/2026, 2:03:38 PM
1class Solution {
2public:
3    int dominantIndex(vector<int>& nums) {
4        int max = INT_MIN;
5        int secMax = INT_MIN;
6        int k = 0;
7
8        for(int i=0; i<nums.size(); i++){
9            if(nums[i] > max){
10                secMax = max;
11                max = nums[i];
12                k = i;
13            }
14            else if(nums[i] > secMax){
15                secMax = nums[i];
16            }
17        }
18
19        if(secMax*2 <= max){
20            return k;
21        }
22        return -1;
23    }
24};