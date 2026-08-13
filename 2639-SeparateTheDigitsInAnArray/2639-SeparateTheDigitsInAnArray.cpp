// Last updated: 8/13/2026, 10:38:51 AM
class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;

        for(int i=0; i<nums.size(); i++){
            string temp = to_string(nums[i]);

            for(int j=0; j<temp.size(); j++){
                ans.push_back(temp[j]-'0');
            }
        }
        return ans;
    }
};