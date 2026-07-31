// Last updated: 7/31/2026, 11:20:33 PM
1class Solution {
2public:
3    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
4        vector<int> ans;
5
6        for(int i=0; i<index.size(); i++){
7            int j = index[i];
8            ans.insert(ans.begin()+j, nums[i]);
9        }
10        return ans;
11    }
12};