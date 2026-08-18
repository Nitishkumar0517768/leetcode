// Last updated: 8/18/2026, 11:49:11 AM
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count = 0;

        for(int i=1; i<nums.size(); i++){
            if(nums[i-1] >= nums[i]){
                count = count + (nums[i-1] + 1 - nums[i]);
                nums[i] = nums[i-1] + 1;
            }
        }
        return count;
    }
};