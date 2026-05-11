// Last updated: 5/11/2026, 10:51:45 AM
1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        if (nums.size()== 0) return 0;
5
6        int k = 1;
7
8        for(int i=1; i<nums.size(); i++){
9            if(nums[i-1] != nums[i]){
10                nums[k] = nums[i];
11                k++;
12            }
13        }
14        return k;
15    }
16};