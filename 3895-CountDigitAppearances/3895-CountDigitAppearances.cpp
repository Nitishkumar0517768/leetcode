// Last updated: 6/17/2026, 10:22:48 AM
1class Solution {
2public:
3    int countDigitOccurrences(vector<int>& nums, int digit) {
4        int count = 0;
5
6        for(int i=0; i<nums.size(); i++){
7            while(nums[i]>0){
8                if(nums[i]%10 == digit){
9                    count++;
10                }
11                nums[i] = nums[i]/10;
12            }
13        }
14        return count;
15    }
16};