// Last updated: 8/18/2026, 11:47:11 AM
class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        set<int> s;

        for(int i=0; i<nums.size(); i++){
            s.insert(nums[i]);
            int rev = 0;
            int n = nums[i];
            while(n>0){
                rev = rev*10 + n%10;
                n /= 10;
            }
            s.insert(rev);
        }
        return s.size();
    }
};