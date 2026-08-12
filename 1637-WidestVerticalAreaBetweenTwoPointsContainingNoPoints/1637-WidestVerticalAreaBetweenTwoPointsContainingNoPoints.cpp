// Last updated: 8/12/2026, 3:00:48 PM
1class Solution {
2public:
3    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
4        sort(points.begin(), points.end());
5
6        int maxD = 0;
7
8        for(int i=0; i<points.size()-1; i++){
9            int diff = points[i+1][0] - points[i][0];
10
11            maxD = max(diff, maxD); 
12        }
13        return maxD;
14    }
15};