// Last updated: 9/30/2026, 10:24:05 PM
1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int low = 0;
5        int high = nums.size()-1;
6
7        while(low <= high){
8            int mid = low + (high-low)/2;
9
10            if(nums[mid] == target){
11                return mid;
12            }
13            else if(nums[mid] > target){
14                high = mid - 1;
15            }
16            else{
17                low = mid + 1;
18            }
19        }
20        return -1;
21    }
22};