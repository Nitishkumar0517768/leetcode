// Last updated: 8/13/2026, 10:37:51 AM
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count = 0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] < k){
                count++;
            }
        }
        return count;
    }
};