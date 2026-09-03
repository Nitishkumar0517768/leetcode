// Last updated: 9/3/2026, 10:50:00 PM
1class Solution {
2public:
3    vector<int> buildArray(vector<int>& nums) {
4        vector<int> res;
5
6        for(int i = 0; i<nums.size(); i++){
7            res.push_back(nums[nums[i]]);
8        }
9        return res;
10    }
11};