// Last updated: 6/17/2026, 10:03:21 AM
1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4
5        int left = 0;
6        int right = nums.size()-1;
7
8        while(left <= right){
9            int mid = (left + right)/2;
10
11            if(nums[mid] == target){
12                return mid;
13            }
14
15            if(nums[mid] < target){
16                left = mid+1;
17            }
18            else{
19                right = mid-1;
20            }
21        }
22        return -1;
23    }
24};