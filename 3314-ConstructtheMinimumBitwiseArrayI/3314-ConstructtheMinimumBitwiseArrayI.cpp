// Last updated: 7/30/2026, 5:21:06 PM
1class Solution {
2public:
3    vector<int> minBitwiseArray(vector<int>& nums) {
4      vector<int> arr;
5      for(int i=0; i<nums.size(); i++){
6        int x=-1;
7        for(int j=0; j<nums[i]; j++){
8            if((j|(j+1))==nums[i]){
9                x=j;
10                break;
11            }
12        }
13        arr.push_back(x);
14      }  
15      return arr;
16    }
17};