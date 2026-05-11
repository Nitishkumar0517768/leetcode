// Last updated: 5/11/2026, 8:57:31 AM
1class Solution {
2public:
3    bool checkIfExist(vector<int>& arr) {
4        for(int i=0; i<arr.size()-1; i++){
5            for(int j=i+1; j<arr.size(); j++){
6                if(arr[i] == 2*arr[j] || arr[j] == 2*arr[i]){
7                    return true;
8                }
9            }
10        }
11        return false;
12    }
13};