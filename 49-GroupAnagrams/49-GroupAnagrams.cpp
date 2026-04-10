// Last updated: 4/10/2026, 2:50:15 PM
1class Solution {
2public:
3    vector<vector<string>> groupAnagrams(vector<string>& strs) {
4        string temp;
5        unordered_map<string, vector<string>> category;
6
7        for(string word : strs){
8            temp = word;
9            sort(temp.begin(), temp.end());
10            category[temp].push_back(word);
11        }
12
13        vector<vector<string>> res;
14        for(auto &it : category){
15            res.push_back(it.second);
16        }
17        return res;
18    }
19};