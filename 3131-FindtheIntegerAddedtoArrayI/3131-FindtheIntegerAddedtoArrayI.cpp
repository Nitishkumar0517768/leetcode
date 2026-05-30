// Last updated: 5/30/2026, 12:52:20 PM
1class Solution {
2public:
3    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
4        int min1 = nums1[0];
5        int min2 = nums2[0];
6
7        for (int i = 0; i < nums1.size(); i++) {
8            if (nums1[i] < min1) {
9                min1 = nums1[i];
10            }
11        }
12
13        for (int i = 0; i < nums2.size(); i++) {
14            if (nums2[i] < min2) {
15                min2 = nums2[i];
16            }
17        }
18
19        return min2 - min1;
20    }
21};