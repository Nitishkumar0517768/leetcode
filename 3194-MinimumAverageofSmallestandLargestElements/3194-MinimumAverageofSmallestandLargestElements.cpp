// Last updated: 5/30/2026, 12:59:59 PM
1class Solution {
2public:
3    double minimumAverage(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5
6        int i=0; 
7        int j=nums.size()-1;
8        double min = INT_MAX;
9
10        while(j > i){
11            double avg = (nums[i]+nums[j])/2.0;
12
13            if(avg < min){
14                min = avg;
15            }
16            i++;
17            j--;
18        }
19        return min;
20    }
21};