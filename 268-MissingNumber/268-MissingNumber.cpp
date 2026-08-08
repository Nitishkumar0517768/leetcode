// Last updated: 8/8/2026, 11:01:09 AM
1class Solution {
2public:
3    int missingNumber(vector<int>& nums) {
4        int n = nums.size();
5        vector<int> v(n+1, -1);
6
7        for(int i=0; i<n; i++){
8            v[nums[i]] = nums[i];
9        }
10
11        for(int i=0; i<v.size(); i++){
12            if(v[i] == -1){
13                return i;
14            }
15        }
16        return n;
17    }
18};