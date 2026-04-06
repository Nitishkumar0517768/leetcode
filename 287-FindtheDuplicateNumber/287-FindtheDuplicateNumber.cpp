// Last updated: 4/6/2026, 10:41:05 AM
1#include <algorithm>
2// #include <map>
3class Solution {
4public:
5    int findDuplicate(vector<int>& nums) {
6
7        // sort(nums.begin(), nums.end());
8        // int n = nums.size();
9
10        // int i=0;
11        // int j=1;
12        // while(j<n){
13        //     if(nums[i] != nums[j]){
14        //         i++;
15        //         j++;
16        //     }
17        //     else{
18        //         return nums[i];
19        //     }
20        // }
21        // return 0;
22
23
24
25        unordered_map<int, int> freq;
26
27        for(int i=0; i<nums.size(); i++){
28            if(freq[nums[i]] == 0){
29                freq[nums[i]] = 1;
30            }
31            else{
32                return nums[i];
33            }
34        }
35        return -1;
36    }
37};