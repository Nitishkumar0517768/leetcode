// Last updated: 5/23/2026, 8:39:18 PM
1class Solution {
2public:
3    bool check(vector<int>& nums) {
4        vector<int>check;
5        for(int x : nums){
6            check.push_back(x);
7        }
8
9        sort(check.begin(), check.end());
10
11        for(int i=0; i<nums.size(); i++){
12            if(nums == check) return true;
13
14            int last = nums.back();
15            nums.pop_back();
16            nums.insert(nums.begin(), last);
17        }
18        return false;
19    }
20};