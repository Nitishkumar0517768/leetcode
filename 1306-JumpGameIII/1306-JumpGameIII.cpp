// Last updated: 5/17/2026, 9:07:05 AM
1class Solution {
2public:
3    int findLucky(vector<int>& arr) {
4        unordered_map<int, int> freq;
5
6        for (int i = 0; i < arr.size(); i++) {
7            freq[arr[i]]++;
8        }
9
10        int res = -1;
11
12        for (auto& it : freq) {
13            cout << it.first << " -> " << it.second << endl;
14            if(it.first == it.second && it.first > res){
15                res = it.first;
16            }
17        }
18        return res;
19    }
20};