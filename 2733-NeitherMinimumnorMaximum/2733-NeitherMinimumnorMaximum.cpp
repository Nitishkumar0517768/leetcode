// Last updated: 5/30/2026, 1:05:42 PM
1class Solution {
2public:
3    int findNonMinOrMax(vector<int>& nums) {
4
5        if(nums.size() <= 2) return -1;
6
7        sort(nums.begin(), nums.end());
8
9        return nums[1];
10    }
11};