// Last updated: 4/23/2026, 9:52:33 PM
1class Solution {
2public:
3    int findMin(vector<int>& nums) {
4        int n = nums[0];
5
6        for(int i=0; i<nums.size(); i++){
7            if(n > nums[i]){
8                n = nums[i];
9            }
10        }
11        return n;
12    }
13};