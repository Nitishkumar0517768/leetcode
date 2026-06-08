// Last updated: 6/8/2026, 11:35:15 AM
1class Solution {
2public:
3    vector<string> summaryRanges(vector<int>& nums) {
4        vector<string> res;
5        
6        for(int i=0; i<nums.size(); i++){
7            int start = nums[i];
8
9            while(i+1 < nums.size() && nums[i+1]==nums[i]+1){
10                i++;
11            }
12
13            int end = nums[i];
14
15             if(start == end) {
16                res.push_back(to_string(start));
17            } else {
18                res.push_back(to_string(start) + "->" + to_string(end));
19            }
20        }
21
22        return res;
23    }
24};