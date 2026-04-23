// Last updated: 4/23/2026, 9:49:38 PM
1class Solution {
2public:
3    int findMin(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5        return nums[0];
6    }
7};