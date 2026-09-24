// Last updated: 9/24/2026, 1:56:05 PM
1class Solution {
2public:
3    int smallestIndex(vector<int>& nums) {
4        for(int i=0; i<nums.size(); i++){
5            int sum = 0;
6            int n = nums[i];
7
8            while(n>0){
9                sum += n%10;
10                n /= 10;
11            }
12
13            if(sum == i){
14                return i;
15            }
16        }
17        return -1;
18    }
19};