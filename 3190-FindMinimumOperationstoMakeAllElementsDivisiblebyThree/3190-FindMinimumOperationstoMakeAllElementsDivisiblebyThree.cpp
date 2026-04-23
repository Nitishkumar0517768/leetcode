// Last updated: 4/23/2026, 3:15:39 PM
1class Solution {
2public:
3    int minimumOperations(vector<int>& nums) {
4        int count = 0;
5
6        for(int i=0; i<nums.size(); i++){
7            if(nums[i] % 3 != 0){
8                count ++;
9            }
10        }
11        return count;
12    }
13};