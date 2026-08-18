// Last updated: 8/18/2026, 11:51:59 AM
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
       bool inc = true;
       bool des = true;

       for(int i=0; i<nums.size()-1; i++){
            if(nums[i] < nums[i+1]){
                des = false;
            }
            if(nums[i] > nums[i+1]){
                inc = false;
            }
       } 
       return inc || des;   
    }
};