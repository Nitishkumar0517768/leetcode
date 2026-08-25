// Last updated: 8/25/2026, 11:49:50 AM
1class Solution {
2public:
3    int missingMultiple(vector<int>& nums, int k) {
4        unordered_set<int> st;
5
6        for(int i=0; i<nums.size(); i++){
7            st.insert(nums[i]);
8        }
9
10        int n = 1;
11
12        for(int i=0; i<nums.size(); i++){
13            int m = k * n;
14
15            if(!st.count(m)){
16                return m;
17            }
18            n++;
19        }
20        return k*n;
21    }
22};