// Last updated: 4/23/2026, 10:05:05 PM
1class Solution {
2public:
3    int maximumCount(vector<int>& nums) {
4        int pos = 0;
5        int neg = 0;
6
7        for(int i=0; i<nums.size(); i++){
8            if(nums[i] > 0){
9                pos++;
10            }
11            else if(nums[i] < 0){
12                neg++;
13            }
14        }
15        if(pos > neg){
16            return pos;
17        }
18        return neg;
19    }
20};