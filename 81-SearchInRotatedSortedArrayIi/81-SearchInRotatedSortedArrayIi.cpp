// Last updated: 8/18/2026, 11:54:46 AM
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == target){
                return true;
            }
        }
        return false;
    }
};