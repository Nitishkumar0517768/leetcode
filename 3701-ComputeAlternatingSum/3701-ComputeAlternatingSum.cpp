// Last updated: 6/6/2026, 11:51:59 AM
1class Solution {
2public:
3    int alternatingSum(vector<int>& nums) {
4        int sum = 0;
5
6        for(int i=0; i<nums.size(); i++){
7            if(i%2 == 0){
8                sum = sum + nums[i];
9            }
10            else{
11                sum = sum - nums[i];
12            }
13        }
14        return sum;
15    }
16};