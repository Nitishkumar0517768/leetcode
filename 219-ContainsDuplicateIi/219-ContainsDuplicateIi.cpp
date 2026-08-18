// Last updated: 8/18/2026, 11:53:44 AM
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for(int i=0; i<nums.size()-1; i++){
            for(int j=i+1; j<nums.size() && abs(i-j)<=k; j++){
                if(nums[i] == nums[j]) return true;
            }
        }
        return false;
    }
};