// Last updated: 5/6/2026, 10:42:46 PM
1class Solution {
2public:
3    int thirdMax(vector<int>& nums) {
4
5        set<int> res(nums.begin(), nums.end());
6
7         if (res.size() < 3) {
8            return *res.rbegin(); 
9        }
10
11        auto it = res.rbegin();
12
13        advance(it, 2); 
14
15        return *it;
16    }
17};