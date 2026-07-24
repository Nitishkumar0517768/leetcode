// Last updated: 7/24/2026, 9:18:26 PM
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
15        int i=0;
16        int j=nums.size()-1;
17        int sum = 0;
18
19        while(j>i){
20            sum += (nums[i]*10 + nums[j]);
21            i++; 
22            j--;
23        }
24        return sum;
25    }
26};