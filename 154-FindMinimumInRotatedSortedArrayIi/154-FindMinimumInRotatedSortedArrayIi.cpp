// Last updated: 8/18/2026, 11:54:17 AM
class Solution {
public:
    int findMin(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // return nums[0];

        int min = INT_MAX;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] < min){
                min = nums[i];
            }
        }
        return min;
    }
};