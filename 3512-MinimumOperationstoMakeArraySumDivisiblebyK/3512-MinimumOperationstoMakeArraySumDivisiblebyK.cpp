// Last updated: 5/18/2026, 1:27:21 PM
1class Solution {
2public:
3    int findDuplicate(vector<int>& nums) {
4        unordered_map<int, int> freq;
5
6        for(int i=0; i<nums.size(); i++){
7            freq[nums[i]]++;
8
9            if(freq[nums[i]] > 1){
10                return nums[i];
11            }
12        }
13        return -1;
14    }
15};