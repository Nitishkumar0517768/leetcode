// Last updated: 8/18/2026, 11:48:57 AM
class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        for (int mask = 0; mask < (1 << n); mask++) {

            int xr = 0;

            for (int i = 0; i < n; i++) {

                if (mask & (1 << i)) {
                    xr ^= nums[i];
                }
            }

            ans += xr;
        }

        return ans;
    }
};