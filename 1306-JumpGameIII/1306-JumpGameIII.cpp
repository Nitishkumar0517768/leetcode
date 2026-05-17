// Last updated: 5/17/2026, 8:31:31 AM
1class Solution {
2public:
3    int smallestIndex(vector<int>& nums) {
4        for(int i=0; i<nums.size(); i++){
5            int sumDigit = 0;
6            int n = nums[i];
7            while(n>0){
8                sumDigit += n%10;
9                n /= 10;
10            }
11            // cout << sumDigit << endl;
12            if(sumDigit == i) return i;
13        }
14        return -1;
15    }
16};