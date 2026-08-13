// Last updated: 8/13/2026, 10:37:11 AM
class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
      vector<int> arr;
      for(int i=0; i<nums.size(); i++){
        int x=-1;
        for(int j=0; j<nums[i]; j++){
            if((j|(j+1))==nums[i]){
                x=j;
                break;
            }
        }
        arr.push_back(x);
      }  
      return arr;
    }
};