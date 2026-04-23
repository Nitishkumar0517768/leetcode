// Last updated: 4/23/2026, 9:52:05 AM
1class Solution {
2public:
3    int minOperations(vector<int>& nums, int k) {
4        int sum = 0;
5
6        for(int i=0; i<nums.size(); i++){
7            sum = sum + nums[i];
8        }
9        return sum%k;
10    }
11};