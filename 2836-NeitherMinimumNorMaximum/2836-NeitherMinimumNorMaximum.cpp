// Last updated: 8/13/2026, 10:38:30 AM
class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {

        if(nums.size() <= 2) return -1;

        sort(nums.begin(), nums.end());

        return nums[1];
    }
};