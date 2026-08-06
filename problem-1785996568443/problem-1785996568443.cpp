// Last updated: 8/6/2026, 11:39:28 AM
1class Solution {
2public:
3    bool canAliceWin(vector<int>& nums) {
4        int sum1 = 0;
5        int sum2 = 0;
6
7        for(int i=0; i<nums.size(); i++){
8            int count = 0;
9            int n = nums[i];
10            while(n>0){
11                count++;
12                n /= 10;
13            }
14            if(count == 2){
15                sum2 += nums[i];
16            }
17            else{
18                sum1 += nums[i];
19            }
20        }
21        if(sum1 != sum2){
22            return true;
23        }
24        return false;
25    }
26};