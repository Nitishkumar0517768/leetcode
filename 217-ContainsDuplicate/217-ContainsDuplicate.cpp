// Last updated: 7/14/2026, 9:44:36 PM
1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        unordered_map<int, int> freq;
5
6        for(int i=0; i<nums.size(); i++){
7            freq[nums[i]]++;
8        }
9
10        for(auto it : freq){
11            if(it.second > 1){
12                return true;
13            }
14        }
15        return false;
16    }
17};