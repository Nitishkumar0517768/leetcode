// Last updated: 8/18/2026, 11:54:28 AM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> freq;

        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++;
        }

        for(auto it : freq){
            if(it.second == 1){
                return it.first;
            }
        }
        return -1;

    }
};