// Last updated: 4/13/2026, 1:35:06 PM
1class Solution {
2public:
3    bool uniqueOccurrences(vector<int>& arr) {
4        unordered_map<int, int> freq;
5
6        for(int val : arr){
7            freq[val]++;
8        }
9
10        unordered_set<int> count;
11
12        for(auto it : freq){
13            count.insert(it.second);
14        }
15
16        return count.size() == freq.size();
17    }
18};