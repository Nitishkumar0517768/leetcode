// Last updated: 8/18/2026, 11:48:53 AM
class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size() - 1;

        return (nums[n] * nums[n-1]) - (nums[0] * nums[1]);
    }
};