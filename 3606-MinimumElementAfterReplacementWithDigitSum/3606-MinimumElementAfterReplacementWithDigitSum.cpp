// Last updated: 8/13/2026, 10:37:09 AM
class Solution {
public:
    int minElement(vector<int>& nums) {
        int min = INT_MAX;
        for(int i=0; i<nums.size(); i++){
            int digit = 0;
            int j=nums[i];
            while(j>0){
                digit = digit + j%10;
                j=j/10;
            }
            
            if(min > digit){
                min = digit;
            }
        }
        return min;

    }
};