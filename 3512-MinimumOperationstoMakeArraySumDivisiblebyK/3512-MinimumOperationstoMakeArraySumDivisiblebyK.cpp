// Last updated: 5/18/2026, 1:44:51 PM
1class Solution {
2public:
3    int thirdMax(vector<int>& nums) {
4        set<int>res(nums.begin(), nums.end());
5
6        if(res.size() < 3){
7            return *res.rbegin();
8        }
9
10        auto it = res.rbegin();
11
12        advance(it,2);
13
14        return *it;
15    }
16};