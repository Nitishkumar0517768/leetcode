// Last updated: 8/18/2026, 11:50:31 AM
class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> ans;

        for(int i=0; i<index.size(); i++){
            int j = index[i];
            ans.insert(ans.begin()+j, nums[i]);
        }
        return ans;
    }
};