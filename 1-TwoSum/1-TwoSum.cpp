// Last updated: 4/23/2026, 9:13:38 AM
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        vector<int> v;
5
6        for(int i=0; i<nums.size()-1; i++){
7            for(int j=i+1; j<nums.size(); j++){
8                if(nums[i] + nums[j] == target){
9                    v.push_back(i);
10                    v.push_back(j);
11                    return v;
12                }
13            }
14        }
15        return v;
16    }
17};