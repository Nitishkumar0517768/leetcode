// Last updated: 4/13/2026, 1:43:57 PM
1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        if(nums.size() == 0) return 0;
5
6        int k = 1;
7
8        for(int i=1; i<nums.size(); i++){
9            if(nums[i-1] != nums[i]){
10                nums[k] = nums[i];
11                k++;
12            }
13        }
14 
15        return k;
16    }
17};