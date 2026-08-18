// Last updated: 8/18/2026, 11:49:25 AM
class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int>check;
        for(int x : nums){
            check.push_back(x);
        }

        sort(check.begin(), check.end());

        for(int i=0; i<nums.size(); i++){
            if(nums == check) return true;

            int last = nums.back();
            nums.pop_back();
            nums.insert(nums.begin(), last);
        }
        return false;
    }
};