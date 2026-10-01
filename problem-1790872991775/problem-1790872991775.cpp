// Last updated: 10/1/2026, 10:13:11 PM
1class Solution {
2public:
3    int findPeakElement(vector<int>& nums) {
4        int low = 0;
5        int high = nums.size() - 1;
6
7        while(low < high){
8            int mid = low + (high-low)/2;
9
10            if(nums[mid] < nums[mid + 1]){
11                low = mid + 1;
12            }
13            else{
14                high = mid;
15            }
16        }
17        return high;
18    }
19};