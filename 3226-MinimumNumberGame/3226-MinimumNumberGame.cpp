// Last updated: 8/13/2026, 10:38:06 AM
class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        for(int i=0; i<nums.size(); i+=2){
            int temp = nums[i];
            nums[i] = nums[i+1];
            nums[i+1] = temp;             
        }
        return nums;
    }
};