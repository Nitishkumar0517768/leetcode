// Last updated: 4/14/2026, 1:46:11 PM
1class Solution {
2public:
3    vector<int> findMissingElements(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5        vector<int> res;
6
7        for(int i = 1; i < nums.size(); i++) {
8            int prev = nums[i - 1];
9            int curr = nums[i];
10
11            for(int j = prev + 1; j < curr; j++) {
12                res.push_back(j);
13            }
14        }
15
16        return res;
17    }
18};