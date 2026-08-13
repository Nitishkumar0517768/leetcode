// Last updated: 8/13/2026, 10:39:03 AM
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos = 0;
        int neg = 0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] > 0){
                pos++;
            }
            else if(nums[i] < 0){
                neg++;
            }
        }
        if(pos > neg){
            return pos;
        }
        return neg;
    }
};