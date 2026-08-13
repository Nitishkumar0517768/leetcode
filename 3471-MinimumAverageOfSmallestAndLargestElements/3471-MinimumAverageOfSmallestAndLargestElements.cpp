// Last updated: 8/13/2026, 10:37:36 AM
class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int i=0; 
        int j=nums.size()-1;
        double min = INT_MAX;

        while(j > i){
            double avg = (nums[i]+nums[j])/2.0;

            if(avg < min){
                min = avg;
            }
            i++;
            j--;
        }
        return min;
    }
};