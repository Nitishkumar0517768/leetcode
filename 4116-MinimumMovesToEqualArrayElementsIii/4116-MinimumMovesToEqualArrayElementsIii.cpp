// Last updated: 8/13/2026, 10:36:19 AM
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int max = 0;
        int mMoves = 0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] > max){
                max = nums[i];
            }
        }

        for(int j=0; j<nums.size(); j++){
            mMoves += (max - nums[j]);
        }
        return mMoves;
    }
};