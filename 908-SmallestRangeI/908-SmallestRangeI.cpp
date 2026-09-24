// Last updated: 9/24/2026, 2:48:31 PM
1class Solution {
2public:
3    int smallestRangeI(vector<int>& nums, int k) {
4        if (nums.size() == 1){
5            return 0;
6        }
7
8        int minNum = INT_MAX;
9        int maxNum = INT_MIN;
10
11        for(int i=0; i<nums.size(); i++){
12            minNum = min(minNum, nums[i]);
13            maxNum = max(maxNum, nums[i]); 
14        }
15
16        int diff = maxNum - minNum;
17
18        if(diff < k*2){
19            return 0;
20        }
21
22        return diff-(k*2);
23    }
24};