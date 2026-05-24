// Last updated: 5/24/2026, 12:37:40 PM
1class Solution {
2public:
3    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
4        vector<int> res;
5        for(int i=0; i<nums.size(); i++){
6                int count = 0;
7            for(int j=0; j<nums.size(); j++){
8                if(nums[i] > nums[j]){
9                    count ++;
10                }
11            }
12            res.push_back(count);
13        }
14        return res;
15    }
16};