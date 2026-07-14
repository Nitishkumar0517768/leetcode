// Last updated: 7/14/2026, 9:25:42 PM
1class Solution {
2public:
3    vector<int> getConcatenation(vector<int>& nums) {
4        int n = nums.size();
5        for(int i=0; i<n; i++){
6            nums.push_back(nums[i]);
7        }
8        return nums;
9    }
10};