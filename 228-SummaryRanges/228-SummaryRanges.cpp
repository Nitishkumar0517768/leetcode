// Last updated: 6/8/2026, 11:55:45 AM
1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        unordered_set<int> st;
5
6        for(int num : nums){
7            if(st.find(num) != st.end()){
8                return true;
9            }
10            st.insert(num);
11        }
12
13        return false;
14    }
15};