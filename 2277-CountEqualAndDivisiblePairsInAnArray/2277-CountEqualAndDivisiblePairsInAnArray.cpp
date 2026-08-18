// Last updated: 8/18/2026, 11:47:57 AM
class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int count = 0;
        for(int i=0; i<nums.size()-1; i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i] == nums[j] && (i*j)%k == 0){
                    count++;
                }
            }
        }
        return count;
    }
};