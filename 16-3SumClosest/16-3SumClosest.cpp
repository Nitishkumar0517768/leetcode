// Last updated: 7/29/2026, 3:51:00 PM
1class Solution {
2public:
3    int threeSumClosest(vector<int>& nums, int target) {
4        int minS = nums[0] + nums[1] + nums[2];
5        sort(nums.begin(), nums.end());
6
7        for(int i=0; i<nums.size()-2; i++){
8            int l = i+1;
9            int r = nums.size()-1;
10            int sum = 0;
11
12            while(r>l){
13                sum = nums[i] + nums[l] + nums[r];
14
15                if (abs(target - sum) < abs(target - minS)) {
16                    minS = sum;
17                }
18
19                if(sum == target){
20                    return sum;
21                }
22
23                 if(sum > target){
24                    r--;
25                }
26                else{
27                    l++;
28                }
29            }
30        }
31
32        return minS;
33    }
34};