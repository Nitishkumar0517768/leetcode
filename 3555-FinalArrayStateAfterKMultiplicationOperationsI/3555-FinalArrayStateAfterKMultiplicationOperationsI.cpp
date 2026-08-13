// Last updated: 8/13/2026, 10:37:22 AM
class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for(int i=0; i<k; i++){
            int small = *min_element(nums.begin(), nums.end());
            int j = min_element(nums.begin(), nums.end()) - nums.begin();

            nums[j] = small * multiplier;
        }
        return nums;
    }
};