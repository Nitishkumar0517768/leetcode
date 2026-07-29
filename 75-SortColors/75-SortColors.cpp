// Last updated: 7/29/2026, 3:20:12 PM
1class Solution {
2public:
3    void sortColors(vector<int>& nums) {
4        int low = 0;
5        int mid = 0;
6        int high = nums.size()-1;
7
8        while(mid <= high){
9            if(nums[mid] == 0){
10                swap(nums[mid], nums[low]);
11                mid++;
12                low++;
13            }
14            else if(nums[mid] == 1){
15                mid++;
16            }
17            else{
18                swap(nums[mid], nums[high]);
19                high--;
20            }
21        }
22    }
23};