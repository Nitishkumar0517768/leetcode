// Last updated: 8/13/2026, 10:37:25 AM
class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum1 = 0;
        int sum2 = 0;

        for(int i=0; i<nums.size(); i++){
            int count = 0;
            int n = nums[i];
            while(n>0){
                count++;
                n /= 10;
            }
            if(count == 2){
                sum2 += nums[i];
            }
            else{
                sum1 += nums[i];
            }
        }
        if(sum1 != sum2){
            return true;
        }
        return false;
    }
};