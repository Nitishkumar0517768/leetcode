// Last updated: 5/18/2026, 12:14:02 PM
1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4       unordered_map<int, int> freq;
5
6       for(int i=0; i<nums.size(); i++){
7            freq[nums[i]]++;
8
9            if(freq[nums[i]] > nums.size()/2){
10                return nums[i];
11            }
12       }
13       return 0;
14    }
15};