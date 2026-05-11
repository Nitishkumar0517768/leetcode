// Last updated: 5/11/2026, 11:12:05 AM
1class Solution {
2public:
3    int removeElement(vector<int>& nums, int val) {
4       int count = 0;
5
6       for(int i=0; i<nums.size(); i++){
7            if(nums[i] != val){
8                nums[count] = nums[i];
9                count ++;
10            }
11       }
12       return count;
13    }
14};