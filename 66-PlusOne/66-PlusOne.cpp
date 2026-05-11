// Last updated: 5/11/2026, 12:06:01 PM
1class Solution {
2public:
3    bool search(vector<int>& nums, int target) {
4        for(int i=0; i<nums.size(); i++){
5            if(nums[i] == target) return true;
6        }
7        return false;
8    }
9};