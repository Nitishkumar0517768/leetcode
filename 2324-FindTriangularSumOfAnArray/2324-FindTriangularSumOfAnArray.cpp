// Last updated: 8/18/2026, 11:47:47 AM
class Solution {
public:
    int triangularSum(vector<int>& nums) {
        if(nums.size() == 1)
        return nums[0];

        string temp1 = "";
        string temp2 = "";

        for(int i=0; i<nums.size(); i++){
            temp1 += to_string(nums[i]);
        }

        while(true){
            int sum = 0;
            for(int i=0; i<temp1.size()-1; i++){
                sum = ((temp1[i]-'0') + (temp1[i+1]-'0')) % 10;
                temp2 += to_string(sum);
            }
            temp1 = temp2;
            temp2 = "";
            if(temp1.size() == 1){
                return stoi(temp1);
            }
        }
        return -1;
    }
};