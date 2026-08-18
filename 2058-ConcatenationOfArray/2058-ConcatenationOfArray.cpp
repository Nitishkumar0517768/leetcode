// Last updated: 8/18/2026, 11:48:49 AM
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<n; i++){
            nums.push_back(nums[i]);
        }
        return nums;
    }
};