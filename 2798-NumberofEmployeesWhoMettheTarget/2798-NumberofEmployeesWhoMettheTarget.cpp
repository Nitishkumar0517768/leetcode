// Last updated: 5/14/2026, 9:00:58 AM
1class Solution {
2public:
3    int findFinalValue(vector<int>& nums, int original) {
4        sort(nums.begin(), nums.end());
5
6        for(int i=0; i<nums.size(); i++){
7            if(nums[i] == original){
8                original *= 2;
9            }
10        }
11        return original;
12    }
13};