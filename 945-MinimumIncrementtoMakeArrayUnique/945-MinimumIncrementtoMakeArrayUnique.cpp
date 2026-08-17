// Last updated: 8/17/2026, 2:56:11 PM
1class Solution {
2public:
3    int minIncrementForUnique(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5
6        int count = 0;
7
8        for(int i=1; i<nums.size(); i++){
9            if(nums[i] <= nums[i-1]){
10                while(nums[i] <= nums[i-1]){
11                    nums[i]++;
12                    count++;
13                }
14            }
15        }
16        return count;
17    }
18};