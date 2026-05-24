// Last updated: 5/24/2026, 2:40:07 PM
1class Solution {
2public:
3    void sortColors(vector<int>& nums) {
4        for(int i=0; i<nums.size()-1; i++){
5            for(int j=0; j<nums.size()-i-1; j++){
6                if(nums[j] > nums[j+1]){
7                    int temp = nums[j];
8                    nums[j] = nums[j+1];
9                    nums[j+1] = temp;
10                }
11            }
12        }
13    }
14};