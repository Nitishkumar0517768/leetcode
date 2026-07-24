// Last updated: 7/24/2026, 9:20:03 PM
1class Solution {
2public:
3    int minimumSum(int num) {
4        vector<int> nums;
5
6        while(num>0){
7            int digit = num % 10;
8            nums.push_back(digit);
9
10            num /= 10;
11        }
12
13        sort(nums.begin(), nums.end());
14
15        int new1 = nums[0] * 10 + nums[2];
16        int new2 = nums[1] * 10 + nums[3];
17
18        return new1 + new2;
19    }
20};