// Last updated: 5/11/2026, 12:14:03 PM
1class Solution {
2public:
3    bool search(vector<int>& nums, int target) {
4        for(int i=0; i<nums.size(); i++){
5            if(nums[i] == target){
6                return true;
7            }
8        }
9        return false;
10    }
11};