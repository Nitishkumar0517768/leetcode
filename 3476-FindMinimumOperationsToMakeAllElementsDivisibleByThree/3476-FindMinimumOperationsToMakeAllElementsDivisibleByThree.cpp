// Last updated: 8/13/2026, 10:37:32 AM
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count = 0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] % 3 != 0){
                count ++;
            }
        }
        return count;
    }
};