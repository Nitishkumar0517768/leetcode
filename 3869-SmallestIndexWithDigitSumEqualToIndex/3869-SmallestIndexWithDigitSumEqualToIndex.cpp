// Last updated: 8/13/2026, 10:36:42 AM
class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            int sumDigit = 0;
            int n = nums[i];
            while(n>0){
                sumDigit += n%10;
                n /= 10;
            }
            // cout << sumDigit << endl;
            if(sumDigit == i) return i;
        }
        return -1;
    }
};