// Last updated: 7/27/2026, 3:48:23 PM
1class Solution {
2public:
3    int minMoves(vector<int>& nums) {
4        int max = 0;
5        int mMoves = 0;
6
7        for(int i=0; i<nums.size(); i++){
8            if(nums[i] > max){
9                max = nums[i];
10            }
11        }
12
13        for(int j=0; j<nums.size(); j++){
14            mMoves += (max - nums[j]);
15        }
16        return mMoves;
17    }
18};