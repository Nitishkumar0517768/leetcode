// Last updated: 8/18/2026, 11:55:28 AM
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int minS = nums[0] + nums[1] + nums[2];
        sort(nums.begin(), nums.end());

        for(int i=0; i<nums.size()-2; i++){
            int l = i+1;
            int r = nums.size()-1;
            int sum = 0;

            while(r>l){
                sum = nums[i] + nums[l] + nums[r];

                if (abs(target - sum) < abs(target - minS)) {
                    minS = sum;
                }

                if(sum == target){
                    return sum;
                }

                 if(sum > target){
                    r--;
                }
                else{
                    l++;
                }
            }
        }

        return minS;
    }
};