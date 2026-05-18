// Last updated: 5/18/2026, 1:13:16 PM
1class Solution {
2public:
3    int findDuplicate(vector<int>& nums) {
4
5        unordered_map<int, int> freq;
6
7        for(int i=0; i<nums.size(); i++){
8            freq[nums[i]]++;
9
10            if(freq[nums[i]] > 1){
11                return nums[i];
12            }
13        }
14        return -1;
15    }
16};