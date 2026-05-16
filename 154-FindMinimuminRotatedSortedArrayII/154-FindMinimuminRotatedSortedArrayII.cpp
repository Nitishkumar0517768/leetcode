// Last updated: 5/16/2026, 9:10:05 PM
1class Solution {
2public:
3    int findMin(vector<int>& nums) {
4        // sort(nums.begin(), nums.end());
5        // return nums[0];
6
7        int min = INT_MAX;
8
9        for(int i=0; i<nums.size(); i++){
10            if(nums[i] < min){
11                min = nums[i];
12            }
13        }
14        return min;
15    }
16};