// Last updated: 5/6/2026, 10:21:41 PM
1class Solution {
2public:
3    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
4        vector<int> res;
5        int i=0; 
6        int j=0; 
7        int k=0;
8
9        while(i<m && j<n){
10            if(nums1[i] <= nums2[j]){
11                res.push_back(nums1[i]);
12                i++;
13            }
14            else{
15                res.push_back(nums2[j]);
16                j++;
17            }
18            k++;
19        }
20
21        if(j<n){
22            while(j<n){
23                res.push_back(nums2[j]);
24                j++;
25                k++;
26            }
27        }
28        
29        else if(i<m){
30            while(i<m){
31                res.push_back(nums1[i]);
32                i++;
33                k++;
34            }
35        }
36        
37
38        for(int n=0; n<k; n++){
39            nums1[n] = res[n];
40        }
41        
42    }
43};