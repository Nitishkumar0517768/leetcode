// Last updated: 5/30/2026, 12:41:17 PM
1class Solution {
2public:
3    int mostFrequentEven(vector<int>& nums) {
4        unordered_map<int, int> freq;
5
6        for(int i=0; i<nums.size(); i++){
7            freq[nums[i]]++;
8        }
9
10        int count = 0;
11        int res = -1;
12
13        for(auto it : freq){
14            if(it.first % 2 == 0){
15                if(it.second > count){
16                    count = it.second;
17                    res = it.first;
18                }
19                else if(it.second == count && it.first < res){
20                    res = it.first;
21                }
22            }
23        }
24        return res;
25    }
26};