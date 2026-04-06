// Last updated: 4/6/2026, 10:11:28 AM
1#include <algorithm>
2class Solution {
3public:
4    int findDuplicate(vector<int>& nums) {
5        sort(nums.begin(), nums.end());
6        int n = nums.size();
7
8        int i=0;
9        int j=1;
10        while(j<n){
11            if(nums[i] != nums[j]){
12                i++;
13                j++;
14            }
15            else{
16                return nums[i];
17            }
18        }
19        return 0;
20    }
21};