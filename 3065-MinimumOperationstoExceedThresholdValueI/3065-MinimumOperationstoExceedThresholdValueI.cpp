// Last updated: 6/6/2026, 11:01:53 AM
1class Solution {
2public:
3    int minOperations(vector<int>& nums, int k) {
4        int count = 0;
5
6        for(int i=0; i<nums.size(); i++){
7            if(nums[i] < k){
8                count++;
9            }
10        }
11        return count;
12    }
13};