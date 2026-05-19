// Last updated: 5/19/2026, 8:44:21 PM
1class Solution {
2public:
3    int getCommon(vector<int>& nums1, vector<int>& nums2) {
4        int i=0; 
5        int j=0;
6
7        while(i<nums1.size() && j<nums2.size()){
8            if(nums1[i] == nums2[j]){
9                return nums1[i];
10            }
11            else if(nums1[i] < nums2[j]){
12                    i++;
13            }
14            else{
15                j++;
16            }
17        }
18        return -1;
19    }
20};