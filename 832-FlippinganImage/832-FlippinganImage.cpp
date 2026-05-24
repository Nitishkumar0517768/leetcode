// Last updated: 5/24/2026, 1:09:58 PM
1class Solution {
2public:
3    int singleNumber(vector<int>& nums) {
4        int res = 0;
5
6        for(int i=0; i<nums.size(); i++){
7            res = res ^ nums[i];
8        }
9        return res;
10    }
11};