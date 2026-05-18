// Last updated: 5/18/2026, 1:37:30 PM
1class Solution {
2public:
3    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
4        set<int> res;
5
6        for(int i=0; i<nums1.size(); i++){
7            for(int j=0; j<nums2.size(); j++){
8                if(nums1[i] == nums2[j]){
9                    res.insert(nums1[i]);
10                    break;
11                }
12            }
13        }
14        vector<int> v (res.begin(), res.end());
15
16        return v;
17    }
18};