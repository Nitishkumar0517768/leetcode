// Last updated: 8/13/2026, 10:39:00 AM
class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum1 = 0;
        int sum2 = 0;

        for(int i=0; i<nums.size(); i++){
            sum1 = sum1 + nums[i];

            int j = nums[i];

            while(j>0){
                sum2 = sum2 + j%10;
                j = j/10;
            }
        }

        int res = sum1 - sum2;

        if(res < 0) return -res;
        
        return res;
    }
};