// Last updated: 8/18/2026, 11:48:04 AM
class Solution {
public:
    int minimumSum(int num) {
        vector<int> nums;

        while(num>0){
            int digit = num % 10;
            nums.push_back(digit);

            num /= 10;
        }

        sort(nums.begin(), nums.end());

        int new1 = nums[0] * 10 + nums[2];
        int new2 = nums[1] * 10 + nums[3];

        return new1 + new2;
    }
};