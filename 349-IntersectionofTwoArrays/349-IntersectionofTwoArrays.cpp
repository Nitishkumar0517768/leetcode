// Last updated: 5/5/2026, 5:43:15 PM
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
14        vector<int> v(res.begin(), res.end());
15        return v;
16    }
17};