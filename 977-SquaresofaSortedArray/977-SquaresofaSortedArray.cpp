// Last updated: 5/21/2026, 6:00:22 PM
1class Solution {
2public:
3    vector<int> sortedSquares(vector<int>& nums) {
4        for(int i=0; i<nums.size(); i++){
5            nums[i] = nums[i]  * nums[i];
6        }
7        sort(nums.begin(), nums.end());
8        return nums;
9    }
10};