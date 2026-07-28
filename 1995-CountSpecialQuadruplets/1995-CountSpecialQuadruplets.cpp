// Last updated: 7/28/2026, 3:48:43 PM
1class Solution {
2public:
3    int countQuadruplets(vector<int>& nums) {
4        int count = 0;
5        int n = nums.size();
6
7        for(int a=0; a<n; a++){
8            for(int b=a+1; b<n; b++){
9                for(int c=b+1; c<n; c++){
10                    for(int d=c+1; d<n; d++){
11                        if(nums[a] + nums[b] + nums[c] == nums[d]){
12                            count++;
13                        }
14                    }
15                }
16            }
17        }
18        return count;
19    }
20};