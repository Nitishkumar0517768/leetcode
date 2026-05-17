// Last updated: 5/17/2026, 1:38:16 PM
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        //extra memory easy
        vector<int> ans;
        for(auto it:nums) if(it<pivot) ans.push_back(it);
        for(auto it:nums) if(it==pivot) ans.push_back(it);
        for(auto it:nums) if(it>pivot) ans.push_back(it);

        //BASICALLY THREE WAY PARTITIONING 

        return ans;
    }
};