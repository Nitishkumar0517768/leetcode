// Last updated: 4/7/2026, 11:37:12 AM
1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4        int count = 0;
5
6        for(int i=0; i<nums.size(); i++){
7            if(nums[i] != 0){
8                nums[count] = nums[i];
9                count ++;
10            }
11        }
12
13        for(int j=count; j<nums.size(); j++){
14            nums[j] = 0;
15        }
16    }
17};