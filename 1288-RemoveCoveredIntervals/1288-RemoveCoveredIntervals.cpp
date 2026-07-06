// Last updated: 7/6/2026, 11:44:52 AM
1class Solution {
2public:
3    int removeCoveredIntervals(vector<vector<int>>& intervals) {
4        int ans = intervals.size();
5
6        for(int i=0; i<intervals.size(); i++){
7            
8            for(int j=0; j<intervals.size(); j++){
9                if(i==j){
10                continue;
11            }
12                if(intervals[i][0] >= intervals[j][0]  &&  intervals[i][1] <= intervals[j][1]){
13                    ans = ans - 1;
14                    break;
15                }
16            }
17        }
18        return ans;
19    }
20};