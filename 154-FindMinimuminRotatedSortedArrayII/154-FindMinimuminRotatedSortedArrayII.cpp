// Last updated: 8/26/2026, 4:38:24 PM
1class Solution {
2public:
3    int findMin(vector<int>& nums) {
4        int left = 0;
5        int right = nums.size()-1;
6
7        while(right > left){
8            int mid = left + (right-left)/2;
9
10            if(nums[mid] > nums[right]){
11                left = mid + 1;
12            }
13            else{
14                right = mid;
15            }
16        }
17        return nums[left];
18    }
19};