// Last updated: 8/25/2026, 11:52:38 AM
1class Solution {
2public:
3    int missingMultiple(vector<int>& nums, int k) {
4        unordered_set<int> st(nums.begin(), nums.end());
5
6        int n = 1;
7
8        for(int i=0; i<nums.size(); i++){
9            int m = k * n;
10
11            if(!st.count(m)){
12                return m;
13            }
14            n++;
15        }
16        return k*n;
17    }
18};