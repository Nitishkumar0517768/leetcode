// Last updated: 8/13/2026, 10:36:16 AM
class Solution {
public:
    int finalElement(vector<int>& nums) {
        if (nums[0] > nums[nums.size() - 1]) {
            return nums[0];
        } else {
            return nums[nums.size() - 1];
        }
    }
};