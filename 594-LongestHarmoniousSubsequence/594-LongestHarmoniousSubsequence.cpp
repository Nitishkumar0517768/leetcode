// Last updated: 8/18/2026, 11:52:38 AM
class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> mpp;
        int maxS = 0;

        for(int val : nums){
            mpp[val]++;
        }

        for(auto &it : mpp){
            int value = it.first;
            int freq = it.second;

            if(mpp.count(value+1)){
                maxS = max(maxS, freq+mpp[value+1]);
            }
            
        }
        return maxS;
    }
};