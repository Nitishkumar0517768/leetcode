// Last updated: 8/18/2026, 11:51:56 AM
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i = 0;
        int j = nums.size()-1;

        while(j>i){
            if(nums[i]%2==1 && nums[j]%2==0){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                i++;
                j--;
            }
            else if(nums[i]%2==0){
                i++;
            }
            else if(nums[j]%2 == 1){
                j--;
            }
        }
        return nums;
    }
};