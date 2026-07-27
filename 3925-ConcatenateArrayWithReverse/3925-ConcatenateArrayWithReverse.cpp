// Last updated: 7/27/2026, 5:50:01 PM
1class Solution {
2public:
3    vector<int> concatWithReverse(vector<int>& nums) {
4        int n = nums.size()-1;
5
6        for(int i=n; i>=0; i--){
7            nums.push_back(nums[i]);
8        }
9        return nums;
10    }
11};