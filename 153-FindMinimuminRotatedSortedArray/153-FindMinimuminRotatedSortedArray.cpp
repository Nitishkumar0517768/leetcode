// Last updated: 5/22/2026, 8:57:21 PM
1class Solution {
2public:
3    int findMin(vector<int>& nums) {
4        int min = nums[0];
5
6        for(int i=0; i<nums.size(); i++){
7            if(nums[i] < min){
8                min = nums[i];
9            }
10        }
11        return min;
12    }
13};