// Last updated: 6/8/2026, 11:59:05 AM
1class Solution {
2public:
3    bool containsNearbyDuplicate(vector<int>& nums, int k) {
4        for(int i=0; i<nums.size()-1; i++){
5            for(int j=i+1; j<nums.size() && abs(i-j)<=k; j++){
6                if(nums[i] == nums[j]) return true;
7            }
8        }
9        return false;
10    }
11};