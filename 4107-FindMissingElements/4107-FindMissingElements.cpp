// Last updated: 8/13/2026, 10:36:20 AM
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> res;

        for(int i = 1; i < nums.size(); i++) {
            int prev = nums[i - 1];
            int curr = nums[i];

            for(int j = prev + 1; j < curr; j++) {
                res.push_back(j);
            }
        }

        return res;
    }
};