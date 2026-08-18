// Last updated: 8/18/2026, 11:54:16 AM
class Solution {
public:
    int findMin(vector<int>& nums) {
        int min = nums[0];

        for(int i=0; i<nums.size(); i++){
            if(nums[i] < min){
                min = nums[i];
            }
        }
        return min;
    }
};