// Last updated: 7/27/2026, 3:36:20 PM
1class Solution {
2public:
3    int maxProduct(vector<int>& nums) {
4        int max = INT_MIN;
5        int secMax = INT_MIN;
6
7        for(int i=0; i<nums.size(); i++){
8            if(nums[i] > max){
9                secMax = max;
10                max = nums[i];
11            }
12            else if(nums[i] > secMax){
13                secMax = nums[i];
14            }
15        }
16        return (max-1) * (secMax-1);
17    }
18};