// Last updated: 5/11/2026, 7:43:17 AM
1class Solution {
2public:
3    int maxAscendingSum(vector<int>& nums) {
4        int sum = nums[0];
5        int maxSum = nums[0];
6
7        for(int i=1; i<nums.size(); i++){
8            if(nums[i] > nums[i-1]){
9                sum = sum + nums[i];
10            }
11            else{
12                sum = nums[i];
13            }
14
15            if(sum > maxSum){
16                maxSum = sum;
17            }
18        }
19        return maxSum;
20    }
21};