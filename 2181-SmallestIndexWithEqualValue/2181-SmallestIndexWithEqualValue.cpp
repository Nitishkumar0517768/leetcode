// Last updated: 8/18/2026, 11:48:22 AM
class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            if(i%10 == nums[i]){
                return i;
            }
        }
        return -1;
    }
};