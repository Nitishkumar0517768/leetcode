// Last updated: 5/14/2026, 8:46:04 AM
1class Solution {
2public:
3    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
4        vector<vector<int>> res;
5        sort(arr.begin(), arr.end());
6        int diff = INT_MAX;
7
8        for(int i=0; i<arr.size()-1; i++){
9            if(abs(arr[i+1] - arr[i]) < diff){
10                diff = abs(arr[i+1] - arr[i]);
11            }
12        }
13
14        for(int i=0; i<arr.size()-1; i++){
15            if(abs(arr[i+1] - arr[i]) == diff){
16                vector<int>temp;
17                temp.push_back(arr[i]);
18                temp.push_back(arr[i+1]);
19                res.push_back(temp);
20            }
21        }
22        return res;
23    }
24};