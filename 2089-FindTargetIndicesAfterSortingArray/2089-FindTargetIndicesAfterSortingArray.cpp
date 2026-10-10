// Last updated: 10/10/2026, 5:52:05 PM
1class Solution {
2public:
3    vector<int> targetIndices(vector<int>& nums, int target) {
4        vector<int> ans;
5        sort(nums.begin(), nums.end());
6
7        for(int i=0; i<nums.size(); i++){
8            if(nums[i] == target){
9                ans.push_back(i);
10            }
11        }
12        return ans;
13    }
14};