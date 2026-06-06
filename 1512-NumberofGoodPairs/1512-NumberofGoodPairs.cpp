// Last updated: 6/6/2026, 11:54:30 AM
1class Solution {
2public:
3    int numIdenticalPairs(vector<int>& nums) {
4        int count = 0;
5
6        for(int i=0; i<nums.size()-1; i++){
7            for(int j=i+1; j<nums.size(); j++){
8                if(nums[i] == nums[j]){
9                    count++;
10                }
11            }
12        }
13        return count;
14    }
15};