// Last updated: 4/24/2026, 11:38:42 AM
1class Solution {
2public:
3    int countPartitions(vector<int>& nums) {
4        int count = 0;
5        for(int i=1; i<nums.size(); i++){
6            int sum1 = 0;
7            int sum2 = 0;
8
9            for(int j=0; j<i; j++){
10                sum1 = sum1 + nums[j];
11            }
12            for(int k=i; k<nums.size(); k++){
13                sum2 = sum2 + nums[k];
14            }
15            int diff = sum1 - sum2;
16
17            if(diff %2 == 0){
18                count++;
19            }
20        }
21        return count;
22    }
23};