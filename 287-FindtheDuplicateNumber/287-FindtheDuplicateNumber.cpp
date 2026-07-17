// Last updated: 7/17/2026, 3:45:43 PM
1class Solution {
2public:
3    int findDuplicate(vector<int>& nums) {
4        unordered_set<int> s;
5
6        for(int i=0; i<nums.size(); i++){
7            if(s.count(nums[i])){
8                return nums[i];
9            }
10              s.insert(nums[i]);
11            
12        }
13        return -1;
14    }
15};