// Last updated: 7/23/2026, 3:51:36 PM
1class Solution {
2public:
3    int averageValue(vector<int>& nums) {
4        int sum = 0;
5        int count = 0;
6
7        for(int i=0; i<nums.size(); i++){
8            if(nums[i]%2 == 0  &&  nums[i]%3 == 0){
9                sum += nums[i];
10                count++;
11            }
12        }
13
14        if(count == 0){
15            return 0;
16        }
17        return sum/count;
18    }
19};