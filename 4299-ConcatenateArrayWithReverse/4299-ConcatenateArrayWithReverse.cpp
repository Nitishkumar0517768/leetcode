// Last updated: 8/13/2026, 10:35:50 AM
class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n = nums.size()-1;

        for(int i=n; i>=0; i--){
            nums.push_back(nums[i]);
        }
        return nums;
    }
};