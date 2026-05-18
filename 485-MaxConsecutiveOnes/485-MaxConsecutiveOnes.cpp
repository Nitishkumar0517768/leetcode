// Last updated: 5/18/2026, 10:43:27 AM
1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        int res = 0;
5        int count = 0;
6
7        for(int i=0; i<nums.size(); i++){
8            if(nums[i] == 0){
9                count = 0;
10            }
11            else{ 
12                count++;
13            }
14            if(count > res){
15                res = count;
16            }
17        }
18        return res;
19    }
20};