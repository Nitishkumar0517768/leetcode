// Last updated: 7/31/2026, 11:11:03 PM
1class Solution {
2public:
3    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
4        int count = 0;
5
6        for(int i=0; i<nums1.size(); i++){
7            for(int j=0; j<nums2.size(); j++){
8                if(nums1[i] % (nums2[j]*k) == 0){
9                    count++;
10                }
11            }
12        }
13
14        return count;
15    }
16};