// Last updated: 8/13/2026, 10:37:02 AM
class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int count = 0;
        for(int i=1; i<nums.size(); i++){
            int sum1 = 0;
            int sum2 = 0;

            for(int j=0; j<i; j++){
                sum1 = sum1 + nums[j];
            }
            for(int k=i; k<nums.size(); k++){
                sum2 = sum2 + nums[k];
            }
            int diff = sum1 - sum2;

            if(diff %2 == 0){
                count++;
            }
        }
        return count;
    }
};