// Last updated: 9/1/2026, 11:32:31 AM
1class Solution {
2public:
3    int sumOfEncryptedInt(vector<int>& nums) {
4        int sum = 0;
5
6        for(int i=0; i<nums.size(); i++){
7            int digit = 1;
8            int maxDigit = INT_MIN;
9            int n = nums[i];
10
11            while(n>0){
12                maxDigit = max(maxDigit, n%10);
13                digit = digit*10 + 1;
14                n /= 10;
15            }
16
17            sum = sum + (maxDigit*(digit/10));
18        }
19        return sum;
20    }
21};