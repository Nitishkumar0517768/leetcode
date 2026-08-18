// Last updated: 8/18/2026, 11:51:49 AM
class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int count = 0;

        for(int i=1; i<nums.size(); i++){
            if(nums[i] <= nums[i-1]){
                while(nums[i] <= nums[i-1]){
                    nums[i]++;
                    count++;
                }
            }
        }
        return count;


        // method - 2 (TLE 56/64)
        // unordered_set<int> st;
        // int count = 0;

        // for(int i=0; i<nums.size(); i++){
        //     while(st.count(nums[i])){
        //         nums[i]++;
        //         count++;
        //     }
        //     st.insert(nums[i]);
        // }
        // return count;
    }
};