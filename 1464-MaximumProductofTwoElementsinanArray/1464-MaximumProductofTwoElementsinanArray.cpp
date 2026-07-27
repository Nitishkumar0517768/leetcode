// Last updated: 7/27/2026, 3:34:22 PM
1class Solution {
2public:
3    int maxProduct(vector<int>& nums) {
4        int max = 0;
5        int maxi = -1;
6        int secMax = 0;
7        int secMaxi = -1;
8
9        for(int i=0; i<nums.size(); i++){
10            if(nums[i] > max){
11                secMax = max;
12                secMaxi = maxi;
13                max = nums[i];
14                maxi = i;
15            }
16            else if(nums[i] > secMax){
17                secMax = nums[i];
18                secMaxi = i;
19            }
20        }
21        return (nums[maxi]-1) * (nums[secMaxi]-1);
22    }
23};