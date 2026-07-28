// Last updated: 7/28/2026, 2:54:41 PM
1class Solution {
2public:
3    vector<int> numberGame(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5
6        for(int i=0; i<nums.size(); i+=2){
7            int temp = nums[i];
8            nums[i] = nums[i+1];
9            nums[i+1] = temp;             
10        }
11        return nums;
12    }
13};