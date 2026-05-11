// Last updated: 5/11/2026, 8:25:30 AM
1class Solution {
2public:
3    int findClosestNumber(vector<int>& nums) {
4        int res = nums[0];
5
6        for(int i=1; i<nums.size(); i++){
7            if(abs(nums[i]) < abs(res) || (abs(nums[i]) == abs(res) && nums[i] > res)){
8                res = nums[i];
9            }
10        }
11        return res;
12    }
13};