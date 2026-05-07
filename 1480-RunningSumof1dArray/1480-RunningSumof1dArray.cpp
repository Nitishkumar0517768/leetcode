// Last updated: 5/7/2026, 5:58:53 PM
1class Solution {
2public:
3    vector<int> runningSum(vector<int>& nums) {
4        int sum = 0;
5        for(int i=0; i<nums.size(); i++){
6            sum = sum + nums[i];
7            nums[i] = sum;
8        }
9        return nums;
10    }
11};