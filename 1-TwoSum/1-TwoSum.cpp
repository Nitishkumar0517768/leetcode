// Last updated: 7/15/2026, 10:43:32 PM
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        map<int,int> mpp;
5
6        for(int i=0; i<nums.size(); i++){
7            int num = nums[i];
8            int req = target - num;
9
10            if(mpp.find(req) != mpp.end()){
11                return {mpp[req], i};
12            }
13
14            mpp[num] = i;
15        }
16        return {-1, -1};
17    }
18};