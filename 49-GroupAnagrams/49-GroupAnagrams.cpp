// Last updated: 7/16/2026, 5:52:52 PM
1class Solution {
2public:
3    vector<vector<string>> groupAnagrams(vector<string>& strs) {
4        unordered_map<string, vector<string>> mpp;
5
6        for(int i=0; i<strs.size(); i++){
7            string temp = strs[i];
8            sort(temp.begin(), temp.end());
9
10            mpp[temp].push_back(strs[i]);
11        }
12
13        vector<vector<string>> res;
14
15        for(auto it : mpp){
16            res.push_back(it.second);
17        }
18        return res;
19    }
20};