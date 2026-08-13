// Last updated: 8/13/2026, 10:38:49 AM
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>left;
        vector<int>right;
        left.push_back(0);
        right.insert(right.begin(),0);

        int sumL = 0;
        int sumR = 0;
        int j=nums.size()-1;

        for(int i=0; i<nums.size(); i++){
            if(left.size() == nums.size()){
                break;
            }
            sumL += nums[i];
            left.push_back(sumL);

            sumR += nums[j];
            right.insert(right.begin(), sumR);
            j--;
        }

        for(int k=0; k<left.size(); k++){
            int diff = abs(left[k]-right[k]);
            left[k] = diff;
        }
        return left;
    }
};