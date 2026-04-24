// Last updated: 4/24/2026, 11:28:10 AM
1class Solution {
2public:
3    int differenceOfSum(vector<int>& nums) {
4        int sum1 = 0;
5        int sum2 = 0;
6
7        for(int i=0; i<nums.size(); i++){
8            sum1 = sum1 + nums[i];
9
10            int j = nums[i];
11
12            while(j>0){
13                sum2 = sum2 + j%10;
14                j = j/10;
15            }
16        }
17
18        int res = sum1 - sum2;
19
20        if(res < 0) return -res;
21        
22        return res;
23    }
24};