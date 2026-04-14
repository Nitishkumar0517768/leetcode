// Last updated: 4/14/2026, 2:01:26 PM
1class Solution {
2public:
3    int maxProductDifference(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5
6        int n = nums.size() - 1;
7
8        return (nums[n] * nums[n-1]) - (nums[0] * nums[1]);
9    }
10};