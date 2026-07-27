// Last updated: 7/27/2026, 3:18:03 PM
1class Solution {
2public:
3    int finalElement(vector<int>& nums) {
4        if (nums[0] > nums[nums.size() - 1]) {
5            return nums[0];
6        } else {
7            return nums[nums.size() - 1];
8        }
9    }
10};