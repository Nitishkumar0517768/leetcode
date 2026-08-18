// Last updated: 8/18/2026, 11:52:22 AM
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max = INT_MIN;
        int secMax = INT_MIN;
        int k = 0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] > max){
                secMax = max;
                max = nums[i];
                k = i;
            }
            else if(nums[i] > secMax){
                secMax = nums[i];
            }
        }

        if(secMax*2 <= max){
            return k;
        }
        return -1;
    }
};