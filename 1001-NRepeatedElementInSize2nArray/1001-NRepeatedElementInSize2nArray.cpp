// Last updated: 8/18/2026, 11:51:47 AM
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int, int> freq;

        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++;

            if(freq[nums[i]] > 1){
                return nums[i];
            }
        }
        return -1;
    }
};