// Last updated: 7/21/2026, 2:57:56 PM
1class Solution {
2public:
3    double findMaxAverage(vector<int>& nums, int k) {
4        double maxAvg = INT_MIN;
5        double sum = 0;
6        int left = 0;
7        double avg;
8
9        for(int right=0; right<nums.size(); right++){
10            sum = sum + nums[right];
11
12            if(right-left+1 > k){
13                sum = sum - nums[left];
14                left++;
15            }
16
17            if(right-left+1 == k){
18                avg = sum/k;
19                maxAvg = max(maxAvg, avg);
20            }
21        }
22
23        return maxAvg;
24    }
25};