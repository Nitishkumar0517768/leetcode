// Last updated: 7/23/2026, 3:54:54 PM
1class Solution {
2public:
3    int countKDifference(vector<int>& nums, int k) {
4        int count = 0;
5
6        for(int i=0; i<nums.size()-1; i++){
7            for(int j=i+1; j<nums.size(); j++){
8                if(abs(nums[i]-nums[j]) == k){
9                    count++;
10                }
11            }
12        }
13        return count;
14    }
15};