// Last updated: 5/30/2026, 9:10:32 AM
1class Solution {
2public:
3    int singleNumber(vector<int>& nums) {
4        unordered_map<int,int> freq;
5
6        for(int i=0; i<nums.size(); i++){
7            freq[nums[i]]++;
8        }
9
10        for(auto it : freq){
11            if(it.second == 1){
12                return it.first;
13            }
14        }
15        return -1;
16
17    }
18};