// Last updated: 4/24/2026, 9:55:06 AM
1class Solution {
2public:
3    int arraySign(vector<int>& nums) {
4        int pro = 1;
5
6        for(int i=0; i<nums.size(); i++){
7            if(nums[i] == 0) return 0;
8            if(nums[i] > 0){
9                pro *= 1;
10            }
11            else{
12                pro *= -1;
13            }
14        }
15        return pro;
16    }
17};