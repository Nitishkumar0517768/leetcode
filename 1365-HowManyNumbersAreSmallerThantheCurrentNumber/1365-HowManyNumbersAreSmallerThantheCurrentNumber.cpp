// Last updated: 5/18/2026, 11:03:18 AM
1class Solution {
2public:
3    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
4        vector<int> res;
5
6        for(int i=0; i<nums.size(); i++){
7            int count = 0;
8
9            for(int j=0; j<nums.size(); j++){
10                if(nums[i] > nums[j]){
11                    count++;
12                }
13            }
14            res.push_back(count);
15        }
16        return res;
17    }
18};