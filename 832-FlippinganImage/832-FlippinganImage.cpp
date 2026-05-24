// Last updated: 5/24/2026, 12:12:09 PM
1class Solution {
2public:
3    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
4        vector<vector<int>> res;
5
6        sort(arr.begin(), arr.end());
7        int diff = INT_MAX;
8
9        for(int i=0; i<arr.size()-1; i++){
10            if(abs(arr[i+1] - arr[i]) < diff){
11                diff = abs(arr[i+1] - arr[i]);
12            }
13        }
14
15        for(int j=0; j<arr.size()-1; j++){
16            if(abs(arr[j+1] - arr[j]) == diff){
17                vector<int> temp;
18                temp.push_back(arr[j]);
19                temp.push_back(arr[j+1]);
20                res.push_back(temp);
21            }
22        }
23        return res;
24    }
25};