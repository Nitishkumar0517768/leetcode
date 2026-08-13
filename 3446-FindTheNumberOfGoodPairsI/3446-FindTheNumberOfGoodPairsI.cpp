// Last updated: 8/13/2026, 10:37:37 AM
class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int count = 0;

        for(int i=0; i<nums1.size(); i++){
            for(int j=0; j<nums2.size(); j++){
                if(nums1[i] % (nums2[j]*k) == 0){
                    count++;
                }
            }
        }

        return count;
    }
};