// Last updated: 8/18/2026, 11:50:05 AM
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum = sum + nums[i];
            nums[i] = sum;
        }
        return nums;
    }
};