// Last updated: 5/10/2026, 1:42:21 PM
1class Solution {
2public:
3    int singleNumber(vector<int>& nums) {
4        int res = 0;
5        for(int i=0; i<nums.size(); i++){
6            res = res ^ nums[i];
7        }
8        return res;
9    }
10};