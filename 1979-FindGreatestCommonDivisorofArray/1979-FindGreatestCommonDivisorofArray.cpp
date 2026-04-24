// Last updated: 4/24/2026, 9:29:46 AM
1class Solution {
2public:
3    int findGCD(vector<int>& nums) {
4        int min = nums[0];
5        int max = nums[0];
6
7        for(int i=0; i<nums.size(); i++){
8            if(min < nums[i]){
9                min = nums[i];
10            }
11            if(max > nums[i]){
12                max = nums[i];
13            }
14        }
15
16
17        for(int i=min; i>=i; i--){
18            if(min%i == 0 && max%i == 0){
19                return i;
20            }
21        }
22        return 0;
23    }
24};