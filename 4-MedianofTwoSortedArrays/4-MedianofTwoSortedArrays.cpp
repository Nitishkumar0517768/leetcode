// Last updated: 4/23/2026, 9:05:30 AM
1class Solution {
2public:
3    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
4        for (int i = 0; i < nums2.size(); i++) {
5            nums1.push_back(nums2[i]);
6        }
7        sort(nums1.begin(), nums1.end());
8
9        int n = nums1.size();
10        float sum = 0;
11
12        if (n % 2 == 0) {
13            sum = nums1[n / 2 - 1] + nums1[n / 2];
14            return sum / 2;
15        } else {
16            return (nums1[n / 2]);
17        }
18    }
19};