// Last updated: 7/17/2026, 3:35:30 PM
1class Solution {
2public:
3    int findLHS(vector<int>& nums) {
4        unordered_map<int, int> mpp;
5        int maxS = 0;
6
7        for(int val : nums){
8            mpp[val]++;
9        }
10
11        for(auto &it : mpp){
12            int value = it.first;
13            int freq = it.second;
14
15            if(mpp.count(value+1)){
16                maxS = max(maxS, freq+mpp[value+1]);
17            }
18            
19        }
20        return maxS;
21    }
22};