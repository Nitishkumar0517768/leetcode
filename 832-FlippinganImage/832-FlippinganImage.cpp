// Last updated: 5/24/2026, 11:56:03 AM
1class Solution {
2public:
3    int repeatedNTimes(vector<int>& nums) {
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