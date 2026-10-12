// Last updated: 10/12/2026, 5:54:56 PM
1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int low = 0; 
5        int high = nums.size() - 1;
6
7        while(low <= high){
8            int mid = low + (high - low)/2;
9
10            if(nums[mid] == target){
11                return mid;
12            }
13            
14            if(nums[low] <= nums[mid]){
15                if(nums[low] <= target && nums[mid] >= target){
16                    high = mid - 1;
17                }
18                else{
19                    low = mid + 1;
20                }
21            }
22            else{
23                if(nums[mid] <= target && nums[high] >= target){
24                    low = mid + 1;
25                }
26                else{
27                    high = mid - 1;
28                }
29            }
30        }
31        return -1;
32    }
33};