// Last updated: 7/17/2026, 2:57:55 PM
1class Solution {
2public:
3    bool uniqueOccurrences(vector<int>& arr) {
4        unordered_map<int, int> freq;
5        for(int i=0; i<arr.size(); i++){
6            freq[arr[i]]++;
7        }
8
9        unordered_set<int> st;
10        for(auto &it : freq){
11            if(!st.count(it.second)){
12                st.insert(it.second);
13            }
14            else{
15                return false;
16            }
17        }
18        return true;
19    }
20};