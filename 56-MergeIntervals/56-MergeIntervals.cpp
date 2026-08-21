// Last updated: 8/21/2026, 3:58:07 PM
1class Solution {
2public:
3    vector<vector<int>> merge(vector<vector<int>>& intervals) {
4
5        vector<vector<int>> ans;
6
7        sort(intervals.begin(), intervals.end());
8
9        vector<int> current = intervals[0];
10
11        for(int i = 1; i < intervals.size(); i++) {
12
13            // Overlapping
14            if(current[1] >= intervals[i][0]) {
15                current[1] = max(current[1], intervals[i][1]);
16            }
17
18            // Not overlapping
19            else {
20                ans.push_back(current);
21                current = intervals[i];
22            }
23        }
24
25        // Add the last interval
26        ans.push_back(current);
27
28        return ans;
29    }
30};