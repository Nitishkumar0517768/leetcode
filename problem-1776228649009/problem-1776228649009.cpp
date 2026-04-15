// Last updated: 4/15/2026, 10:20:49 AM
1class Solution {
2public:
3    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
4        for(int i=0; i<k; i++){
5            int small = *min_element(nums.begin(), nums.end());
6            int j = min_element(nums.begin(), nums.end()) - nums.begin();
7
8            nums[j] = small * multiplier;
9        }
10        return nums;
11    }
12};