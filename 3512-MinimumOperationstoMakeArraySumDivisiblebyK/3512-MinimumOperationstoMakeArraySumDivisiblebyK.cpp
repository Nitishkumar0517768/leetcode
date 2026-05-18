// Last updated: 5/18/2026, 12:50:21 PM
1class Solution {
2public:
3    vector<int> singleNumber(vector<int>& nums) {
4        unordered_map<int,int> freq;
5        vector<int> res;
6
7        for(int i=0; i<nums.size(); i++){
8            freq[nums[i]]++;
9        }
10
11        for(auto it : freq){
12            if(it.second == 1){
13                res.push_back(it.first);
14            }
15        }
16        return res;
17    }
18};