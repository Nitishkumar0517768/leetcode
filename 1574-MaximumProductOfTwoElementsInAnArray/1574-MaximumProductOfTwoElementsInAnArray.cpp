// Last updated: 8/18/2026, 11:50:11 AM
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max = INT_MIN;
        int secMax = INT_MIN;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] > max){
                secMax = max;
                max = nums[i];
            }
            else if(nums[i] > secMax){
                secMax = nums[i];
            }
        }
        return (max-1) * (secMax-1);
    }
};