// Last updated: 8/17/2026, 3:23:54 PM
1class Solution {
2public:
3    int minOperations(vector<int>& nums) {
4        int count = 0;
5
6        for(int i=1; i<nums.size(); i++){
7            if(nums[i-1] >= nums[i]){
8                count = count + (nums[i-1] + 1 - nums[i]);
9                nums[i] = nums[i-1] + 1;
10            }
11        }
12        return count;
13    }
14};