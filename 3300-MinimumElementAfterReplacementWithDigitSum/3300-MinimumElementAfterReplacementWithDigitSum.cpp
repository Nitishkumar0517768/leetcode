// Last updated: 5/29/2026, 4:06:02 PM
1class Solution {
2public:
3    int minElement(vector<int>& nums) {
4        int min = INT_MAX;
5        for(int i=0; i<nums.size(); i++){
6            int digit = 0;
7            int j=nums[i];
8            while(j>0){
9                digit = digit + j%10;
10                j=j/10;
11            }
12            
13            if(min > digit){
14                min = digit;
15            }
16        }
17        return min;
18
19    }
20};