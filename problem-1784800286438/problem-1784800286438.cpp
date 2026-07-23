// Last updated: 7/23/2026, 3:21:26 PM
1class Solution {
2public:
3    bool isMonotonic(vector<int>& nums) {
4       bool inc = true;
5       bool des = true;
6
7       for(int i=0; i<nums.size()-1; i++){
8            if(nums[i] < nums[i+1]){
9                des = false;
10            }
11            if(nums[i] > nums[i+1]){
12                inc = false;
13            }
14       } 
15       return inc || des;   
16    }
17};