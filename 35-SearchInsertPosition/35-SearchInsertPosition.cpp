// Last updated: 8/18/2026, 11:55:04 AM
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == target || nums[i] > target) return i;
        }
        return nums.size();
    }
};